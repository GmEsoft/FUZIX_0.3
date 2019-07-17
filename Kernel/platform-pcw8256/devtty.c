#include <kernel.h>
#include <kdata.h>
#include <printf.h>
#include <stdbool.h>
#include <devtty.h>
#include <tty.h>
#include <vt.h>
#include <input.h>
#include <devinput.h>

#undef  DEBUG            /* UNdefine to delete debug code sequences */

uint8_t vtattr_cap;
struct vt_repeat keyrepeat;
static uint8_t kbd_timer;

__sfr __at 0xE0	dart0d;
__sfr __at 0xE1 dart0c;
__sfr __at 0xE2	dart1d;
__sfr __at 0xE3 dart1c;
__sfr __at 0xE4	ctc0;
__sfr __at 0xE5 ctc1;
__sfr __at 0xE7 ctcmode;

static uint8_t tbuf1[TTYSIZ];
static uint8_t tbuf2[TTYSIZ];
static uint8_t tbuf3[TTYSIZ];

static uint8_t sleeping;

struct  s_queue  ttyinq[NUM_DEV_TTY+1] = {       /* ttyinq[0] is never used */
    {   NULL,    NULL,    NULL,    0,        0,       0    },
    {   tbuf1,   tbuf1,   tbuf1,   TTYSIZ,   0,   TTYSIZ/2 },
    {   tbuf2,   tbuf2,   tbuf2,   TTYSIZ,   0,   TTYSIZ/2 },
    {   tbuf3,   tbuf3,   tbuf3,   TTYSIZ,   0,   TTYSIZ/2 }
};

static tcflag_t console_mask[4] = {
	_ISYS,
	_OSYS,
	_CSYS,
	_LSYS
};


static tcflag_t uart_mask[4] = {
	_ISYS,
	_OSYS,
	_CSYS,	/* For now - need to do DART code */
	_LSYS
};


tcflag_t *termios_mask[NUM_DEV_TTY + 1] = {
	NULL,
	console_mask,
	uart_mask,
	uart_mask,
};

/* console driver for errors etc */
void kputchar(char c)
{
    if(c=='\n')
        tty_putc(1, '\r');
    tty_putc(1, c);
}

static uint8_t dartrr(uint8_t minor, uint8_t r)
{
    uint8_t irq;
    uint8_t ch;

    irq = di();

    if (minor == 2) {
        dart0c = r;
        ch = dart0c;
    } else {
        dart1c = r;
        ch = dart1c;
    }

    irqrestore(irq);

    return ch;
}

static void dartwr(uint8_t minor, uint8_t r, uint8_t v)
{
    uint8_t irq;
    irq = di();

    if (minor == 2) {
        dart0c = r;
        dart0c = v;
    } else {
        dart1c = r;
        dart1c = v;
    }
    irqrestore(irq);
}

ttyready_t tty_writeready(uint8_t minor)
{
    if (minor == 1)
        return TTY_READY_NOW;
    else
        return (dartrr(minor, 0) & 4) ? TTY_READY_NOW : TTY_READY_SOON;
}

extern void bugout(uint16_t c);

void tty_putc(uint8_t minor, unsigned char c)
{
    if (minor == 1)
        vtoutput(&c, 1);
    else if (minor == 2)
        dart0d = c;
    else
        dart1d = c;
}

void tty_irq(void)
{
    uint8_t s = dartrr(2, 0);
    uint8_t c;
    if (s & 1) {
        c = dart0d;
        tty_inproc(2, c);
    }
    if ((s & 4) && (sleeping & 4)) {
	tty_outproc(2);
	sleeping &= ~4;
    }
    s = dartrr(3, 0);
    if (s & 1) {
        c = dart0d;
        tty_inproc(3, c);
    }
    if ((s & 4) && (sleeping & 8)) {
	tty_outproc(3);
	sleeping &= ~8;
    }
}

/* Called to set baud rate etc */
void tty_setup(uint8_t minor, uint8_t flags)
{
    minor;
}

/* For the moment */
int tty_carrier(uint8_t minor)
{
    minor;
    return 1;
}

void tty_sleeping(uint8_t minor)
{
	sleeping |= (1 << minor);
}

void tty_data_consumed(uint8_t minor)
{
}

/* Pending better ioctl bits set up for 9600 8N1 */

void tty_init_port(void)
{
    ctcmode = 0x36;
    ctc0 = 0x00;
    ctc0 = 0x0D;
    ctcmode = 0x76;
    ctc0 = 0x00;
    ctc0 = 0x0D;
    dartwr(2, 0, 0x18);	/* Reset */
    dartwr(2, 3, 0xE1);	/* 8bit, flow controlled, rx enable */
    dartwr(2, 4, 0x44);	/* 1 stop, no parity */
    dartwr(2, 5, 0x66);	/* 8bit tx, tx enable, rts enable, dtr on */
    dartwr(3, 0, 0x18);	/* Reset */
    dartwr(3, 3, 0xE1);	/* 8bit, flow controlled, rx enable */
    dartwr(3, 4, 0x44);	/* 1 stop, no parity */
    dartwr(3, 5, 0x66);	/* 8bit tx, tx enable, rts enable, dtr on */
}


/*********************** Keyboard **************************/

uint8_t keymap[12];
static uint8_t *keyin = (uint8_t *)0xFFF0;
static uint8_t keybyte, keybit;
static uint8_t newkey;
static int keysdown = 0;
static uint8_t shiftmask[12] = {	/* Shift keys */
    0,0,0x20,0,
    0,0,0,0,
    0x40,0,0x80,0			/* Fixme: shiftlock */
};

static void keyproc(void)
{
	int i;
	uint8_t key;
	uint8_t kin;

	/* We have 12 bytes of keys to scan on the PCW, we don't need to
	   touch the extras */
	for (i = 0; i < 12; i++) {
	        kin = keyin[i];		/* MMIO so changes under us */
		key = kin ^ keymap[i];
		if (key) {
		        /* Scan for changes */
			int n;
			int m = 128;
			for (n = 7; n >= 0; n--) {
				if ((key & m) && (keymap[i] & m)) {
					if (!(shiftmask[i] & m))
						keysdown--;
				}
				if ((key & m) && !(keymap[i] & m)) {
					if (!(shiftmask[i] & m)) {
						keysdown++;
						newkey = 1;
						keybyte = i;
						keybit = n;
					}
				}
				m >>= 1;
			}
		}
		keymap[i] = kin;
	}
}

const uint8_t keyboard[12][8] = {
	{'2', '3', '6', '9', KEY_PASTE ,KEY_F1, '0', KEY_F3},
	{'1', '5', '4', '8', KEY_COPY, KEY_CUT, KEY_PRINT, KEY_EXIT},
	{KEY_PLUS, KEY_HALF, 0, '7', '#', 13, ']', KEY_DELR},
	{'.', '/', ';', '$'/*FIXME*/, 'p', '[', '-', '='},
	{',', 'm', 'k', 'l', 'i', 'o', '9', '0'},
	{' ', 'n', 'j', 'h', 'y', 'u', '7', '8'},
	{'v', 'b', 'f', 'g', 't', 'r', '5', '6'},
	{'x', 'c', 'd', 's', 'w', 'e', '3', '4'},
	{'z', 0, 'a', KEY_TAB, 'q', KEY_ESC, '2', '1'},
	{KEY_DEL, '.', 13, KEY_F7, KEY_MINUS, KEY_CANCEL, 0, KEY_F5},	/* FIXME: js line */
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0}	/* FIXME: js 2 */
};

const uint8_t shiftkeyboard[12][8] = {
	{'2', '3', '6', '9', KEY_PASTE, KEY_F2, '0', KEY_F4},
	{'1', '5', '4', '8', KEY_COPY, KEY_CUT, KEY_PRINT, KEY_EXIT},
	{KEY_PLUS, '@', 0, '7', '>', 13, '}', KEY_DELR},
	{KEY_DOT, '?', ':', '<', 'P', '{', '_', '+'},
	{'\'', 'M', 'K', 'L', 'I', 'O', '(', ')'},
	{' ', 'N', 'J', 'H', 'Y', 'U', '&', '*'},
	{'V', 'B', 'F', 'G', 'T', 'R', '%', '^'},
	{'X', 'C', 'D', 'S', 'W', 'E', KEY_POUND, '$'},
	{'Z', 0, 'A', KEY_TAB, 'Q', KEY_STOP, '"', '!'},
	{0, 0, 0, 0, 0, 0, 0, 0},	/* FIXME: js 1 */
	{0, 0, 0, 0, 0, 0, 0, 0}	/* FIXME: js 2 */
};

static uint8_t capslock = 0;


/* What should we do with extra, not as if you can run emacs */

static void keydecode(void)
{
	uint8_t c;

	if (keybyte == 8 && keybit == 6) {
		capslock = 1 - capslock;
		return;
	}
	if (keymap[2] & (1 << 5))	/* shift */
		c = shiftkeyboard[keybyte][7-keybit];
	else
		c = keyboard[keybyte][7-keybit];
	if (keymap[10] & 0x80) {	/* alt */
		if (c > 31 && c < 127)
			c &= 31;
	}
	if (capslock && c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	switch(keyboard_grab) {
		case 1:
			/* FIXME: proper rule needed */
			if (c >= 0x84)
				queue_input(c);
			/* Fall through */
		case 0:
			vt_inproc(1, c);
			return;
		case 2:
			queue_input(c);
			return;
	}
}

/* Vblank ticker */
uint8_t vblank;

__sfr __at 0xF4 timer;

/* FIXME: keyboard repeat
          floppy motor, serial etc */
void platform_interrupt(void) 
{
	/* The low 4 bits count timer events, 0 means this interrupt
	   was from something else only */
	uint8_t t = timer & 0x0F;

	if (timer == 0) {
		/* serial or similar event, so poll them */
		tty_irq();
	}

	/* No timer work pending */
	if (timer == 0)
		return;

	newkey = 0;
	keyproc();

	while(t--) {
		if (keysdown && keysdown < 3) {
			if (newkey) {
				keydecode();
				kbd_timer = keyrepeat.first;
			} else if (! --kbd_timer) {
				keydecode();
				kbd_timer = keyrepeat.continual;
			}
		}
		vblank++;
		wakeup(&vblank);
		/* Should also run the mouse accumulator here FIXME */
		timer_interrupt();
	}
}
