#define NUM_OBJ 76
#define WORDSIZE 5
#define GAME_MAGIC 126
#include <stdint.h>

struct location {
  const char *text;
  uint8_t exit[6];
};

const char toomuch[] = { "I am carrying too much. " };
const char dead[] = { "I am dead.\n" };
const char stored_msg[] = { "I have stored " };
const char stored_msg2[] = { " treasures. On a scale of 0 to 100, that rates " };
const char dotnewline[] = { ".\n" };
const char newline[] = { "\n" };
const char carrying[] = { "I am carrying:\n" };
const char dashstr[] = { " - " };
const char nothing[] = { "nothing" };
const char lightout[] = { "My light has run out." };
const char lightoutin[] = { "My light runs out in " };
const char turns[] = { "turns" };
const char turn[] = { "turn" };
const char whattodo[] = { "\nTell me what to do ? " };
const char prompt[] = { "\n> " };
const char dontknow[] = { "You use word(s) I don't know! " };
const char givedirn[] = { "Give me a direction too. " };
const char darkdanger[] = { "Dangerous to move in the dark! " };
const char brokeneck[] = { "I fell down and broke my neck. " };
const char cantgo[] = { "I can't go in that direction. " };
const char dontunderstand[] = { "I don't understand your command. " };
const char notyet[] = { "I can't do that yet. " };
const char beyondpower[] = { "It is beyond my power to do that. " };
const char okmsg[] = { "O.K. " };
const char whatstr[] = { "What ? " };
const char itsdark[] = { "I can't see. It is too dark!" };
const char youare[] = { "I am in a " };
const char nonestr[] = { "none" };
const char obexit[] = { "\nObvious exits: " };
const char canalsosee[] = { "I can also see: " };
const char playagain[] = { "Do you want to play again Y/N: " };
const char invcond[] = { "INVCOND" };
const char *exitmsgptr[] = {
  "North",
  "South",
  "East",
  "West",
  "Up",
  "Down"
};



/*
 * 
 *	Game database follows below. Although linked into the same asm
 *	file to make life easier this is just "mere aggregation" for
 *	convenience, due to limits in the tool chain and the game licence
 *	not the GPL applies to the game database.
 */
const uint8_t startlamp = 255;
const uint8_t lightfill = 255;
const uint8_t startcarried = 6;
const uint8_t maxcar = 10;
const uint8_t treasure = 19;
const uint8_t treasures = 13;
const uint8_t lastloc = 32;
const uint8_t startloc = 1;


const struct location locdata[] = {
		{ 	"",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x66\x69\x65\x6C\x64",
 { 9, 9, 0, 9, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x61\x20\x44\x72\x61\x77\x62\x72\x69\x64\x67\x65",
 { 0, 0, 28, 1, 0, 0 } }, 
		{ 	"\x63\x6F\x75\x72\x74\x79\x61\x72\x64",
 { 21, 10, 7, 28, 0, 0 } }, 
		{ 	"\x6D\x61\x67\x69\x63\x20\x66\x6F\x75\x6E\x74\x61\x69\x6E",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x73\x74\x72\x65\x61\x6D\x20\x6F\x66\x20\x6C\x61\x76\x61",
 { 26, 27, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x74\x6F\x70\x20\x6F\x66\x20\x74\x68\x65\x20\x66\x6F\x75\x6E\x74\x61\x69\x6E",
 { 0, 0, 0, 0, 0, 4 } }, 
		{ 	"\x62\x61\x6C\x6C\x20\x72\x6F\x6F\x6D",
 { 0, 0, 0, 3, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x61\x20\x6C\x61\x72\x67\x65\x20\x63\x68\x61\x6E\x64\x65\x6C\x69\x65\x72",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x66\x6F\x72\x65\x73\x74\x20\x6F\x66\x20\x65\x6E\x63\x68\x61\x6E\x74\x6D\x65\x6E\x74",
 { 9, 9, 1, 9, 0, 0 } }, 
		{ 	"\x70\x6C\x61\x69\x6E\x20\x72\x6F\x6F\x6D",
 { 3, 0, 0, 0, 0, 0 } }, 
		{ 	"\x73\x74\x6F\x72\x65\x72\x6F\x6F\x6D",
 { 10, 0, 0, 0, 0, 14 } }, 
		{ 	"\x64\x75\x6E\x67\x65\x6F\x6E\x20\x63\x65\x6C\x6C",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x61\x6E\x74\x65\x72\x6F\x6F\x6D",
 { 0, 0, 0, 0, 14, 0 } }, 
		{ 	"\x73\x74\x61\x69\x72\x63\x61\x73\x65",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x6C\x6F\x66\x74\x20\x61\x62\x6F\x76\x65\x20\x62\x61\x6C\x6C\x72\x6F\x6F\x6D",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x69\x6E\x20\x74\x68\x65\x20\x77\x61\x74\x65\x72\x20\x6F\x66\x20\x61\x20\x6D\x6F\x61\x74",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x75\x6E\x64\x65\x72\x77\x61\x74\x65\x72\x20\x69\x6E\x0A\x74\x68\x69\x63\x6B\x20\x6D\x75\x72\x6B\x79\x20\x66\x6C\x75\x69\x64",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x75\x6E\x64\x65\x72\x20\x74\x68\x65\x20\x73\x74\x61\x69\x72\x73",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x68\x6F\x6C\x6C\x6F\x77\x20\x74\x72\x65\x65\x20\x73\x69\x67\x6E\x20\x73\x61\x79\x73\x20\x64\x72\x6F\x70\x0A\x73\x74\x61\x72\x73\x20\x68\x65\x72\x65",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x70\x6F\x6F\x6C\x20\x6F\x66\x20\x64\x69\x72\x74\x79\x20\x77\x61\x74\x65\x72",
 { 0, 0, 0, 0, 21, 0 } }, 
		{ 	"\x6B\x69\x74\x63\x68\x65\x6E",
 { 0, 3, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x61\x20\x62\x6F\x78",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x62\x6F\x78",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x64\x75\x73\x74\x79\x20\x72\x6F\x6F\x6D",
 { 0, 0, 0, 10, 0, 0 } }, 
		{ 	"\x73\x74\x6F\x6E\x65\x20\x73\x74\x61\x69\x72\x63\x61\x73\x65",
 { 0, 0, 0, 0, 24, 26 } }, 
		{ 	"\x64\x61\x6D\x70\x20\x63\x61\x76\x65\x72\x6E",
 { 0, 0, 0, 0, 25, 0 } }, 
		{ 	"\x73\x74\x6F\x6E\x65\x20\x67\x72\x6F\x74\x74\x6F",
 { 5, 0, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x69\x6E\x20\x61\x6E\x20\x65\x6E\x74\x72\x79\x77\x61\x79",
 { 0, 0, 3, 0, 0, 0 } }, 
		{ 	"\x64\x72\x61\x67\x6F\x6E\x27\x73\x20\x6C\x61\x69\x72",
 { 0, 0, 0, 0, 10, 0 } }, 
		{ 	"\x77\x69\x7A\x61\x72\x64\x27\x73\x20\x77\x6F\x72\x6B\x73\x68\x6F\x70",
 { 0, 0, 0, 29, 0, 0 } }, 
		{ 	"\x76\x61\x63\x61\x6E\x74\x20\x72\x6F\x6F\x6D",
 { 0, 0, 10, 0, 0, 0 } }, 
		{ 	"\x72\x65\x61\x6C\x20\x6D\x65\x73\x73\x21",
 { 0, 0, 0, 0, 0, 0 } }, 
};
const uint8_t objinit[] = {
	12,
	1,
	1,
	1,
	0,
	4,
	8,
	0,
	30,
	0,
	11,
	18,
	0,
	0,
	0,
	27,
	29,
	0,
	3,
	4,
	0,
	26,
	6,
	6,
	255,
	7,
	0,
	7,
	8,
	12,
	0,
	13,
	0,
	31,
	255,
	15,
	255,
	8,
	0,
	0,
	3,
	0,
	0,
	16,
	2,
	255,
	21,
	0,
	21,
	0,
	3,
	0,
	0,
	24,
	0,
	28,
	0,
	30,
	29,
	0,
	0,
	255,
	17,
	0,
	31,
	0,
	0,
	12,
	0,
	0,
	27,
	23,
	11,
	255,
	28,
	14,
};


const char *objtext[] = {
	"\x2A\x53\x54\x41\x52",
	"\x4D\x6F\x61\x74",
	"\x43\x61\x73\x74\x6C\x65",
	"\x52\x61\x69\x73\x65\x64\x20\x64\x72\x61\x77\x62\x72\x69\x64\x67\x65",
	"\x4C\x6F\x77\x65\x72\x65\x64\x20\x64\x72\x61\x77\x62\x72\x69\x64\x67\x65",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x49\x27\x6D\x20\x67\x6C\x6F\x77\x69\x6E\x67",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x2A\x53\x54\x41\x52",
	"\x4D\x61\x67\x69\x63\x20\x46\x6F\x75\x6E\x74\x61\x69\x6E",
	"\x43\x6F\x75\x72\x74\x79\x61\x72\x64",
	"\x4D\x61\x67\x69\x63\x20\x6D\x69\x72\x72\x6F\x72",
	"\x48\x6F\x74\x20\x6C\x61\x76\x61\x20\x73\x74\x72\x65\x61\x6D",
	"\x44\x61\x72\x6B\x20\x61\x69\x72\x20\x73\x68\x61\x66\x74",
	"\x57\x61\x74\x65\x72\x20\x6F\x75\x74\x6C\x65\x74",
	"\x46\x69\x72\x65\x20\x73\x70\x65\x6C\x6C",
	"\x43\x68\x61\x6E\x64\x65\x6C\x69\x65\x72\x20\x6E\x65\x61\x72\x20\x63\x65\x69\x6C\x69\x6E\x67",
	"\x46\x61\x6C\x6C\x65\x6E\x20\x43\x68\x61\x6E\x64\x65\x6C\x69\x65\x72",
	"\x54\x69\x65\x64\x20\x65\x6E\x64\x20\x6F\x66\x20\x72\x6F\x70\x65",
	"\x42\x72\x6F\x6B\x65\x6E\x20\x67\x6C\x61\x73\x73",
	"\x4F\x61\x6B\x20\x64\x6F\x6F\x72",
	"\x4F\x70\x65\x6E\x20\x64\x6F\x6F\x72",
	"\x4F\x61\x6B\x20\x64\x6F\x6F\x72",
	"\x4F\x70\x65\x6E\x20\x64\x6F\x6F\x72",
	"\x53\x70\x65\x6C\x6C\x20\x6F\x66\x20\x4D\x65\x74\x68\x75\x73\x65\x6C\x61\x68",
	"\x53\x65\x65\x64\x20\x73\x70\x65\x6C\x6C",
	"\x50\x6F\x74\x69\x6F\x6E",
	"\x4C\x69\x67\x68\x74\x20\x73\x71\x75\x61\x72\x65\x64\x20\x73\x70\x65\x6C\x6C",
	"\x42\x61\x6C\x6C\x72\x6F\x6F\x6D",
	"\x4C\x6F\x66\x74",
	"\x4D\x6F\x61\x74\x20\x62\x6F\x74\x74\x6F\x6D",
	"\x50\x65\x72\x6D\x65\x61\x62\x69\x6C\x69\x74\x79\x20\x73\x70\x65\x6C\x6C",
	"\x53\x70\x65\x6C\x6C\x20\x6F\x66\x20\x42\x6C\x69\x73\x73",
	"\x50\x69\x65\x63\x65\x20\x6F\x66\x20\x77\x6F\x6F\x64",
	"\x53\x6C\x65\x65\x70\x69\x6E\x67\x20\x6D\x6F\x61\x74\x20\x6D\x6F\x6E\x73\x74\x65\x72",
	"\x4D\x6F\x61\x74",
	"\x59\x6F\x68\x6F\x20\x73\x70\x65\x6C\x6C",
	"\x4C\x61\x72\x67\x65\x20\x66\x6C\x6F\x6F\x72\x20\x64\x72\x61\x69\x6E",
	"\x48\x6F\x6C\x65",
	"\x57\x6F\x6F\x64\x65\x6E\x20\x63\x72\x61\x74\x65",
	"\x48\x6F\x6C\x65",
	"\x46\x69\x72\x65\x20\x62\x72\x69\x63\x6B\x73",
	"\x57\x61\x74\x65\x72\x20\x64\x72\x6F\x70\x6C\x65\x74\x73",
	"\x57\x72\x69\x6E\x6B\x6C\x65\x73",
	"\x53\x74\x6F\x6E\x65\x20\x64\x6F\x6F\x72",
	"\x4F\x70\x65\x6E\x20\x64\x6F\x6F\x72",
	"\x52\x61\x69\x73\x65\x64\x20\x64\x72\x61\x77\x62\x72\x69\x64\x67\x65",
	"\x4C\x6F\x77\x65\x72\x65\x64\x20\x64\x72\x61\x77\x62\x72\x69\x64\x67\x65",
	"\x46\x69\x72\x65\x66\x6C\x79\x20\x73\x70\x65\x6C\x6C",
	"\x4F\x6C\x64\x20\x64\x72\x61\x67\x6F\x6E",
	"\x44\x75\x73\x74",
	"\x48\x6F\x6C\x65",
	"\x57\x69\x63\x6B\x65\x64\x20\x51\x75\x65\x65\x6E\x27\x73\x20\x73\x70\x65\x6C\x6C",
	"\x53\x6F\x67\x67\x79\x20\x74\x6F\x77\x65\x6C",
	"\x41\x73\x68\x65\x73",
	"\x55\x6E\x72\x61\x76\x65\x6C\x20\x73\x70\x65\x6C\x6C",
	"\x44\x61\x6D\x70\x20\x74\x6F\x77\x65\x6C",
	"\x44\x72\x79\x20\x74\x6F\x77\x65\x6C",
	"\x41\x69\x72\x20\x73\x68\x61\x66\x74",
	"\x54\x69\x6E\x20\x63\x61\x6E",
	"\x4F\x70\x65\x6E\x20\x63\x61\x6E",
	"\x44\x69\x7A\x7A\x79\x20\x44\x65\x61\x6E\x20\x73\x70\x65\x6C\x6C",
	"\x50\x69\x65\x63\x65\x20\x6F\x66\x20\x6D\x65\x74\x61\x6C",
	"\x53\x69\x67\x6E\x3A\x20\x53\x54\x41\x49\x52\x57\x41\x59\x20\x43\x4F\x4E\x44\x45\x4D\x45\x44",
	"\x4C\x79\x63\x61\x6E\x74\x68\x72\x6F\x70\x65\x20\x73\x70\x65\x6C\x6C",
	"\x4F\x6C\x64\x20\x6C\x65\x76\x65\x72\x20\x69\x6E\x20\x77\x61\x6C\x6C",
	"\x52\x61\x62\x69\x64\x20\x72\x61\x74\x73",
};
const char *msgptr[] = {
	"",
	"\x4F\x2E\x4B\x2E",
	"\x49\x20\x73\x65\x65",
	"\x6E\x6F\x74\x68\x69\x6E\x67",
	"\x73\x70\x65\x63\x69\x61\x6C",
	"\x73\x6F\x6D\x65\x74\x68\x69\x6E\x67",
	"\x53\x6F\x72\x72\x79\x2C",
	"\x49\x27\x6D",
	"\x79\x65\x61\x72\x73\x20\x6F\x6C\x64\x2C",
	"\x68\x65\x61\x6C\x74\x68\x79\x2C",
	"\x66\x6C\x6F\x61\x74\x69\x6E\x67\x20\x61\x6E\x20\x69\x6E\x63\x68\x20\x61\x62\x6F\x76\x65\x20\x73\x75\x72\x66\x61\x63\x65\x2C",
	"\x69\x6E\x76\x69\x73\x69\x62\x6C\x65\x2C",
	"\x72\x69\x67\x68\x74\x20\x6E\x6F\x77\x21",
	"\x41\x64\x76\x65\x6E\x74\x75\x72\x65\x20\x31\x33\x20\x62\x79\x20\x53\x63\x6F\x74\x74\x20\x41\x64\x61\x6D\x73\x2C\x20\x64\x65\x64\x69\x63\x61\x74\x65\x64\x20\x74\x6F\x3A\x0A\x52\x6F\x65\x20\x41\x64\x61\x6D\x73\x20\x28\x6E\x6F\x74\x20\x61\x20\x72\x65\x6C\x61\x74\x69\x76\x65\x29\x20\x61\x6E\x64\x0A\x52\x69\x63\x68\x61\x72\x64\x20\x41\x64\x61\x6D\x73\x20\x28\x42\x72\x6F\x74\x68\x65\x72\x20\x61\x6E\x64\x20\x66\x61\x76\x6F\x72\x69\x74\x65\x20\x42\x65\x74\x61\x20\x54\x65\x73\x74\x65\x72\x29\x21",
	"\x23\x20\x40\x20\x21\x20\x23\x20\x25\x20\x2A\x20\x28\x65\x78\x70\x6C\x65\x74\x69\x76\x65\x20\x64\x65\x6C\x65\x74\x65\x64\x29\x20\x6C\x61\x76\x61\x21",
	"\x49\x20\x62\x75\x72\x6E\x74\x20\x74\x6F\x20\x61\x20\x63\x72\x69\x73\x70\x2E",
	"\x6C\x61\x72\x67\x65\x20\x77\x61\x74\x65\x72\x20\x66\x6F\x75\x6E\x74\x61\x69\x6E\x20\x77\x69\x74\x68\x20\x32\x20\x73\x74\x6F\x72\x79\x20\x63\x65\x6E\x74\x65\x72\x70\x69\x65\x63\x65\x2E",
	"\x69\x6E\x20\x32\x20\x77\x6F\x72\x64\x73\x3B\x20\x61\x74\x20\x77\x68\x61\x74\x3F",
	"\x69\x74\x20\x73\x74\x61\x72\x74\x73\x20\x74\x6F\x20\x62\x75\x72\x6E\x2E",
	"\x43\x68\x61\x6E\x64\x65\x6C\x69\x65\x72\x20\x66\x65\x6C\x6C\x20\x77\x69\x74\x68\x20\x61\x20\x63\x72\x61\x73\x68",
	"\x6F\x6E\x20\x6D\x65\x21",
	"\x61\x6E\x20\x69\x6E\x61\x63\x63\x65\x73\x73\x69\x62\x6C\x65\x20\x6C\x6F\x66\x74\x20\x61\x72\x65\x61\x2E",
	"\x49\x74\x27\x73\x20\x73\x74\x72\x61\x69\x67\x68\x74\x20\x75\x70\x21",
	"\x49\x74\x20\x77\x6F\x6E\x27\x74\x20\x6C\x65\x74\x20\x6D\x65\x2E",
	"\x53\x61\x79\x20\x61\x67\x61\x69\x6E\x20\x77\x69\x74\x68\x20\x64\x69\x72\x65\x63\x74\x69\x6F\x6E\x2E",
	"\x68\x61\x70\x70\x65\x6E\x73",
	"\x77\x61\x6C\x6C",
	"\x69\x6E\x20\x74\x68\x65\x20\x77\x61\x79",
	"\x6D\x6F\x76\x65\x73\x2E",
	"\x61\x20\x6C\x6F\x63\x6B\x65\x64\x20\x73\x6F\x6C\x69\x64\x20\x64\x6F\x6F\x72\x2E",
	"\x49\x20\x66\x61\x6C\x6C\x21",
	"\x4F\x70\x65\x6E\x20\x53\x45\x53\x41\x4D\x45\x20\x53\x45\x45\x44\x21",
	"\x53\x70\x65\x6C\x6C\x20\x66\x61\x69\x6C\x73\x21",
	"\x49\x20\x68\x69\x74\x20\x68\x61\x72\x64\x21",
	"\x47\x6F\x74",
	"\x69\x74\x27\x73\x20\x65\x6E\x63\x68\x61\x6E\x74\x65\x64",
	"\x49\x20\x63\x61\x6E\x27\x74\x2C",
	"\x53\x70\x65\x6C\x6C\x20\x77\x6F\x72\x6B\x73\x21",
	"\x49\x20\x62\x72\x65\x61\x74\x68\x65\x2E",
	"\x41\x72\x67\x68\x21",
	"\x49\x20\x64\x72\x6F\x77\x6E\x21",
	"\x41\x73\x74\x68\x6D\x61\x20\x79\x6F\x75\x20\x6B\x6E\x6F\x77\x2E",
	"\x57\x68\x6F\x6F\x73\x68\x21",
	"\x49\x74\x20\x62\x72\x65\x61\x6B\x73\x21",
	"\x49\x20\x74\x72\x69\x70\x20\x26",
	"\x43\x72\x61\x73\x68\x21",
	"\x48\x6F\x77\x3F",
	"\x69\x74\x27\x73\x20\x64\x69\x73\x73\x6F\x6C\x76\x69\x6E\x67\x2E",
	"\x49\x20\x66\x65\x65\x6C\x20\x76\x65\x72\x79\x20\x6F\x64\x64\x21",
	"\x47\x72\x65\x61\x74\x21\x20\x49\x27\x6D\x20\x64\x72\x61\x67\x6F\x6E\x20\x66\x6F\x64\x64\x65\x72\x21",
	"\x33\x20\x6F\x64\x64\x20\x77\x61\x6C\x6C\x73\x20\x26\x20\x66\x6C\x6F\x6F\x72\x2E",
	"\x73\x6D\x61\x6C\x6C\x20\x63\x72\x61\x63\x6B\x73\x20\x61\x72\x6F\x75\x6E\x64\x20\x65\x64\x67\x65\x73\x20\x26\x20\x65\x6D\x70\x74\x79\x20\x69\x63\x6F\x6E\x20\x6E\x69\x63\x68\x65\x73\x2E",
	"\x6F\x66\x20\x61\x20\x68\x6F\x6C\x65\x2E",
	"\x41\x43\x48\x4F\x4F\x4F\x4F\x21",
	"\x44\x72\x61\x67\x6F\x6E",
	"\x53\x6F\x75\x6E\x64\x73\x20\x68\x6F\x6C\x6C\x6F\x77\x21",
	"\x68\x65\x61\x72\x73\x20\x6D\x65\x21",
	"\x49\x27\x6D\x20\x64\x72\x61\x67\x67\x65\x64\x20\x75\x6E\x64\x65\x72\x21",
	"\x4C\x69\x67\x68\x74\x20\x6C\x69\x67\x68\x74\x20\x28\x75\x6E\x68\x65\x61\x76\x79\x20\x6C\x61\x6D\x70\x29\x20\x72\x69\x73\x65\x73\x21",
	"\x49\x20\x63\x61\x6E\x27\x74\x20\x74\x68\x72\x6F\x77\x20\x74\x68\x61\x74\x21",
	"\x62\x61\x74\x74\x6C\x65\x6D\x65\x6E\x74\x73\x20\x61\x62\x6F\x76\x65\x2E",
	"\x61\x20\x74\x69\x6E\x20\x63\x61\x6E\x20\x75\x70\x20\x74\x68\x65\x72\x65\x2E",
	"\x44\x72\x61\x74\x20\x49\x20\x6D\x69\x73\x73\x65\x64\x20\x69\x74\x21",
	"\x49\x20\x68\x69\x74\x20\x69\x74\x21",
	"\x4D\x75\x63\x68\x20\x74\x6F\x6F\x20\x68\x69\x67\x68\x20\x66\x6F\x72\x20\x6D\x65\x21",
	"\x61\x72\x6D\x73\x20\x6F\x66\x20\x73\x74\x65\x65\x6C\x2C",
	"\x61\x20\x73\x68\x61\x72\x70\x20\x68\x6F\x6F\x6B\x65\x64\x20\x70\x69\x65\x63\x65\x20\x6F\x66\x20\x6D\x65\x74\x61\x6C\x2E",
	"\x74\x68\x65\x20\x75\x73\x75\x61\x6C\x20\x74\x68\x69\x6E\x67\x73\x2E",
	"\x53\x61\x79\x20\x61\x67\x61\x69\x6E\x20\x26\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x63\x2E",
	"\x57\x68\x61\x74\x20\x64\x6F\x20\x79\x6F\x75\x20\x74\x68\x69\x6E\x6B\x20\x49\x27\x6D\x20\x64\x6F\x69\x6E\x67\x3F",
	"\x61\x20\x66\x65\x72\x72\x65\x74\x2C",
	"\x72\x61\x74\x73\x20\x73\x63\x75\x74\x74\x6C\x69\x6E\x67\x20\x69\x6E\x74\x6F\x20\x74\x68\x65\x69\x72\x20\x68\x6F\x6C\x65\x2E",
	"\x72\x61\x74\x73\x20\x69\x6E\x20\x74\x68\x65\x20\x77\x61\x79\x21",
	"\x61\x20\x73\x6D\x61\x6C\x6C\x20\x74\x79\x70\x65",
	"\x69\x74\x73\x20\x73\x65\x61\x6C\x65\x64\x2E",
	"\x45\x76\x65\x72\x79\x74\x68\x69\x6E\x67\x20\x73\x70\x69\x6E\x73\x20\x61\x72\x6F\x75\x6E\x64\x21",
	"\x43\x61\x73\x74\x20\x61\x20\x73\x70\x65\x6C\x6C\x21",
	"\x49\x27\x6D\x20\x64\x65\x2D\x6D\x6F\x61\x74\x65\x64\x20\x69\x6E\x20\x74\x68\x65\x20\x66\x69\x65\x6C\x64\x21",
	"\x53\x77\x69\x6D\x20\x64\x6F\x77\x6E\x3F",
	"\x42\x6C\x75\x62\x21",
};


const uint8_t status[] = {
	170, 
	4, 19, 9, 15, 
	56, 70, 76, 
	174, 
	4, 23, 5, 47, 9, 15, 
	56, 70, 76, 
	177, 
	8, 15, 7, 23, 7, 19, 7, 12, 
	57, 76, 
	172, 
	8, 8, 6, 51, 0, 51, 
	74, 
	146, 50, 
	1, 51, 0, 4, 0, 11, 0, 4, 
	81, 83, 81, 
	142, 50, 
	8, 7, 0, 5, 0, 5, 
	81, 77, 73, 
	200, 
	15, 0, 0, 7, 
	60, 
	211, 
	0, 5, 0, 4, 0, 19, 0, 4, 
	81, 81, 82, 81, 
	176, 
	4, 17, 3, 65, 0, 65, 0, 62, 
	72, 
	170, 
	2, 29, 9, 15, 
	56, 70, 76, 
	175, 
	9, 1, 0, 1, 0, 31, 
	58, 13, 79, 73, 
	202, 
	0, 4, 0, 1, 
	81, 80, 54, 
	211, 
	0, 10, 0, 2, 0, 30, 0, 3, 
	79, 81, 79, 81, 
	211, 
	0, 6, 0, 5, 0, 15, 0, 7, 
	79, 81, 79, 81, 
	206, 
	0, 22, 0, 1, 0, 1, 
	54, 87, 54, 
	176, 
	4, 17, 3, 66, 0, 66, 0, 62, 
	72, 
	144, 75, 
	4, 5, 0, 65, 0, 66, 3, 65, 
	72, 
	138, 80, 
	8, 4, 0, 3, 
	81, 77, 73, 
	200, 
	15, 0, 0, 4, 
	60, 
	196, 
	0, 3, 
	81, 
	170, 
	0, 4, 0, 52, 
	81, 73, 59, 
	196, 
	15, 0, 
	61, 
	196, 
	16, 100, 
	61, 
	206, 
	16, 60, 0, 52, 15, 100, 
	74, 39, 48, 
	200, 
	15, 20, 16, 0, 
	48, 
	196, 
	0, 4, 
	81, 
	171, 
	2, 58, 9, 3, 
	88, 88, 49, 61, 
	179, 
	8, 12, 0, 25, 0, 26, 0, 12, 
	19, 73, 72, 60, 
	197, 
	2, 26, 
	20, 61, 
	138, 50, 
	8, 3, 0, 2, 
	81, 77, 73, 
	200, 
	15, 0, 0, 3, 
	60, 
	196, 
	0, 2, 
	81, 
	169, 
	4, 5, 9, 4, 
	15, 61, 
	182, 
	8, 19, 0, 48, 0, 7, 0, 47, 0, 23, 
	62, 62, 73, 
	207, 
	0, 49, 0, 22, 0, 19, 
	62, 45, 60, 76, 
	146, 25, 
	8, 11, 0, 11, 0, 12, 0, 27, 
	60, 58, 55, 
	170, 
	8, 13, 0, 1, 
	81, 77, 73, 
	196, 
	15, 5, 
	39, 
	201, 
	15, 0, 0, 13, 
	38, 60, 
	196, 
	0, 1, 
	81, 
	169, 
	4, 17, 9, 13, 
	40, 61, 
	183, 
	4, 23, 1, 48, 0, 1, 0, 48, 0, 1, 
	87, 53, 87, 76, 
	151, 45, 
	8, 14, 0, 14, 0, 68, 0, 50, 0, 50, 
	60, 75, 113, 59, 
	169, 
	8, 14, 0, 14, 
	60, 112, 
	178, 
	8, 20, 14, 32, 0, 29, 0, 30, 
	72, 57, 73, 
	201, 
	0, 31, 0, 32, 
	72, 76, 
	174, 
	2, 75, 8, 23, 0, 75, 
	2, 121, 59, 
	138, 75, 
	8, 9, 0, 7, 
	81, 77, 73, 
	200, 
	15, 0, 0, 9, 
	60, 
	196, 
	0, 7, 
	81, 
	166, 
	8, 23, 
	81, 73, 77, 
	200, 
	15, 0, 0, 23, 
	60, 
	192, 
	81, 
	165, 
	4, 32, 
	65, 63, 
};
const uint8_t actions[] = {
	0, 95, 0, 
	128, 
	5, 36, 64, 
	4, 10, 
	2, 50, 
	5, 36, 5, 
	4, 3, 
	2, 110, 
	5, 22, 48, 
	8, 2, 
	1, 17, 
	15, 55, 99, 
	9, 22, 0, 41, 0, 22, 
	34, 5, 74, 58, 
	19, 25, 60, 
	8, 2, 0, 2, 0, 50, 9, 9, 
	60, 114, 112, 53, 
	13, 36, 83, 
	4, 3, 14, 68, 14, 69, 
	2, 111, 
	13, 36, 83, 
	4, 2, 14, 68, 14, 69, 
	2, 111, 
	5, 36, 21, 
	4, 3, 
	2, 110, 
	5, 36, 5, 
	4, 2, 
	2, 110, 
	5, 36, 21, 
	4, 2, 
	2, 110, 
	5, 1, 59, 
	2, 67, 
	6, 22, 
	13, 25, 58, 
	8, 10, 2, 31, 0, 20, 
	37, 58, 
	13, 25, 58, 
	8, 10, 2, 29, 0, 20, 
	37, 58, 
	13, 80, 75, 
	3, 62, 0, 65, 0, 62, 
	1, 72, 
	22, 34, 0, 
	1, 51, 3, 66, 0, 66, 0, 62, 0, 51, 
	1, 72, 59, 
	19, 25, 60, 
	8, 2, 0, 2, 8, 9, 0, 14, 
	60, 37, 73, 58, 
	204, 
	4, 3, 0, 50, 0, 2, 
	62, 
	204, 
	4, 2, 0, 50, 0, 3, 
	62, 
	11, 25, 52, 
	8, 2, 2, 58, 
	104, 106, 49, 61, 
	11, 25, 52, 
	8, 10, 2, 58, 
	104, 106, 49, 61, 
	14, 1, 12, 
	2, 27, 0, 12, 0, 27, 
	1, 58, 59, 
	5, 50, 11, 
	8, 10, 
	1, 17, 
	6, 36, 29, 
	4, 21, 
	1, 2, 117, 
	10, 1, 58, 
	2, 54, 0, 25, 
	1, 54, 76, 
	15, 50, 33, 
	3, 41, 0, 41, 0, 4, 
	37, 59, 73, 58, 
	202, 
	4, 17, 0, 1, 
	54, 76, 42, 
	15, 32, 100, 
	2, 74, 0, 74, 0, 42, 
	73, 59, 74, 1, 
	211, 
	0, 55, 0, 56, 0, 3, 0, 4, 
	72, 72, 45, 43, 
	6, 36, 35, 
	4, 14, 
	2, 123, 102, 
	15, 50, 57, 
	3, 73, 0, 73, 0, 23, 
	73, 37, 59, 58, 
	202, 
	0, 0, 0, 5, 
	81, 79, 81, 
	10, 25, 103, 
	8, 10, 2, 75, 
	37, 15, 61, 
	10, 36, 12, 
	2, 25, 8, 11, 
	1, 2, 47, 
	15, 50, 74, 
	1, 45, 8, 6, 0, 45, 
	37, 80, 76, 59, 
	14, 50, 40, 
	1, 33, 0, 7, 0, 33, 
	37, 58, 59, 
	0, 71, 0, 
	63, 
	0, 67, 0, 
	65, 
	0, 72, 0, 
	66, 
	0, 10, 41, 
	66, 
	15, 36, 43, 
	2, 39, 14, 12, 0, 12, 
	1, 74, 34, 5, 
	6, 36, 60, 
	3, 68, 
	1, 2, 124, 
	19, 50, 77, 
	3, 64, 2, 25, 0, 11, 0, 64, 
	1, 37, 58, 59, 
	10, 50, 77, 
	3, 64, 0, 64, 
	6, 59, 32, 
	14, 10, 12, 
	2, 27, 0, 12, 0, 27, 
	1, 58, 59, 
	15, 1, 8, 
	2, 18, 0, 4, 0, 8, 
	1, 54, 76, 58, 
	15, 1, 7, 
	2, 19, 0, 3, 0, 8, 
	1, 54, 76, 60, 
	11, 36, 10, 
	3, 20, 0, 4, 
	81, 7, 78, 73, 
	197, 
	0, 4, 
	81, 8, 
	196, 
	8, 3, 
	11, 
	196, 
	9, 9, 
	9, 
	196, 
	8, 4, 
	10, 
	196, 
	8, 9, 
	115, 
	196, 
	8, 23, 
	120, 
	192, 
	12, 
	14, 1, 36, 
	2, 21, 9, 4, 0, 5, 
	1, 15, 61, 
	5, 46, 36, 
	2, 21, 
	1, 14, 
	5, 36, 58, 
	2, 53, 
	2, 29, 
	14, 1, 36, 
	2, 21, 8, 4, 0, 5, 
	1, 54, 76, 
	2, 36, 8, 
	1, 2, 16, 
	10, 1, 9, 
	4, 4, 0, 6, 
	1, 54, 76, 
	15, 50, 11, 
	3, 24, 0, 10, 0, 24, 
	1, 17, 58, 59, 
	19, 25, 12, 
	2, 25, 8, 10, 0, 11, 0, 10, 
	1, 18, 58, 60, 
	14, 25, 50, 
	8, 10, 4, 14, 4, 14, 
	37, 15, 61, 
	23, 50, 26, 
	1, 34, 0, 34, 2, 53, 0, 53, 0, 54, 
	1, 59, 37, 72, 
	19, 50, 26, 
	1, 34, 2, 31, 0, 20, 0, 34, 
	31, 37, 58, 59, 
	6, 36, 54, 
	4, 21, 
	1, 2, 117, 
	23, 70, 6, 
	4, 20, 0, 6, 0, 2, 0, 6, 0, 17, 
	81, 79, 81, 54, 
	19, 50, 26, 
	1, 34, 2, 29, 0, 20, 0, 34, 
	31, 37, 58, 59, 
	15, 22, 48, 
	3, 50, 0, 50, 0, 2, 
	1, 59, 58, 17, 
	10, 1, 58, 
	2, 30, 0, 13, 
	1, 54, 76, 
	10, 1, 58, 
	2, 32, 0, 12, 
	1, 54, 76, 
	15, 50, 55, 
	3, 70, 0, 70, 0, 9, 
	37, 59, 58, 125, 
	14, 36, 76, 
	3, 63, 14, 7, 0, 7, 
	74, 34, 5, 
	11, 32, 4, 
	4, 10, 0, 31, 
	26, 28, 54, 76, 
	10, 1, 13, 
	2, 26, 0, 8, 
	1, 54, 76, 
	6, 36, 14, 
	4, 7, 
	1, 2, 21, 
	6, 36, 5, 
	4, 7, 
	1, 2, 21, 
	4, 52, 18, 
	4, 9, 
	23, 
	4, 1, 18, 
	4, 9, 
	23, 
	4, 28, 65, 
	4, 10, 
	24, 
	2, 28, 65, 
	1, 3, 25, 
	11, 28, 3, 
	4, 10, 0, 24, 
	26, 28, 54, 76, 
	11, 28, 2, 
	4, 10, 0, 11, 
	26, 28, 54, 76, 
	6, 28, 4, 
	4, 10, 
	6, 3, 25, 
	6, 36, 65, 
	4, 10, 
	1, 2, 51, 
	10, 1, 42, 
	2, 46, 0, 20, 
	1, 54, 76, 
	7, 70, 4, 
	4, 17, 
	6, 36, 26, 27, 
	9, 70, 3, 
	4, 17, 0, 6, 
	81, 73, 
	202, 
	19, 2, 0, 20, 
	1, 54, 76, 
	199, 
	4, 17, 
	6, 36, 26, 27, 
	196, 
	0, 6, 
	81, 
	11, 28, 6, 
	4, 10, 0, 29, 
	30, 54, 76, 88, 
	195, 
	88, 88, 88, 88, 
	10, 1, 38, 
	2, 56, 0, 2, 
	1, 54, 76, 
	1, 62, 0, 
	6, 41, 
	1, 61, 31, 
	6, 41, 
	15, 1, 59, 
	2, 22, 0, 12, 0, 8, 
	1, 54, 76, 60, 
	23, 50, 26, 
	2, 3, 1, 34, 0, 34, 0, 3, 0, 4, 
	31, 73, 59, 72, 
	201, 
	0, 55, 0, 56, 
	72, 37, 
	10, 1, 38, 
	2, 4, 0, 2, 
	1, 54, 76, 
	6, 36, 58, 
	2, 29, 
	1, 2, 29, 
	6, 36, 58, 
	2, 31, 
	1, 2, 29, 
	2, 55, 58, 
	6, 36, 35, 
	14, 58, 28, 
	3, 35, 0, 35, 0, 3, 
	1, 59, 58, 
	15, 42, 0, 
	4, 1, 14, 14, 0, 14, 
	1, 74, 34, 5, 
	1, 27, 39, 
	1, 71, 
	10, 50, 61, 
	3, 36, 0, 36, 
	59, 73, 1, 
	206, 
	2, 37, 0, 37, 0, 38, 
	72, 37, 108, 
	200, 
	14, 38, 5, 26, 
	32, 
	199, 
	2, 26, 
	108, 19, 20, 61, 
	19, 1, 16, 
	2, 38, 0, 15, 0, 37, 0, 38, 
	54, 76, 72, 19, 
	10, 1, 63, 
	2, 37, 0, 7, 
	1, 54, 76, 
	10, 1, 22, 
	2, 1, 0, 16, 
	1, 54, 76, 
	23, 10, 30, 
	9, 13, 0, 13, 0, 1, 0, 8, 0, 1, 
	58, 81, 79, 81, 
	10, 61, 0, 
	0, 13, 8, 13, 
	1, 60, 38, 
	23, 70, 6, 
	4, 16, 9, 4, 0, 17, 0, 6, 0, 1, 
	54, 81, 79, 73, 
	203, 
	0, 6, 0, 39, 
	81, 59, 1, 76, 
	19, 70, 6, 
	4, 17, 14, 39, 0, 6, 0, 1, 
	1, 81, 82, 73, 
	201, 
	16, 4, 0, 39, 
	53, 76, 
	196, 
	0, 6, 
	81, 
	15, 50, 51, 
	1, 57, 0, 57, 0, 9, 
	59, 48, 74, 76, 
	23, 70, 5, 
	4, 17, 2, 39, 0, 39, 0, 6, 0, 6, 
	59, 81, 77, 81, 
	11, 70, 5, 
	4, 17, 0, 6, 
	1, 81, 77, 73, 
	201, 
	15, 0, 0, 16, 
	54, 76, 
	196, 
	0, 6, 
	81, 
	5, 50, 32, 
	3, 40, 
	1, 73, 
	207, 
	4, 13, 0, 12, 0, 40, 
	37, 54, 76, 59, 
	211, 
	13, 40, 4, 12, 0, 13, 0, 40, 
	37, 54, 76, 59, 
	207, 
	4, 14, 0, 18, 0, 40, 
	37, 54, 76, 59, 
	211, 
	13, 40, 4, 18, 0, 14, 0, 40, 
	37, 54, 76, 59, 
	207, 
	4, 23, 0, 22, 0, 40, 
	37, 54, 76, 59, 
	215, 
	13, 40, 3, 48, 0, 1, 0, 23, 0, 40, 
	87, 54, 37, 59, 
	211, 
	13, 40, 4, 22, 0, 23, 0, 40, 
	37, 54, 76, 59, 
	207, 
	4, 9, 0, 19, 0, 40, 
	37, 54, 76, 59, 
	202, 
	13, 40, 0, 40, 
	6, 59, 32, 
	11, 60, 0, 
	4, 15, 9, 4, 
	1, 30, 33, 61, 
	15, 60, 0, 
	4, 15, 8, 4, 0, 7, 
	30, 37, 54, 76, 
	15, 36, 52, 
	2, 58, 14, 17, 0, 17, 
	74, 1, 34, 5, 
	6, 70, 0, 
	4, 17, 
	6, 36, 35, 
	19, 1, 46, 
	2, 48, 0, 1, 0, 22, 7, 17, 
	1, 87, 54, 76, 
	10, 10, 45, 
	4, 22, 0, 1, 
	1, 87, 76, 
	10, 10, 6, 
	4, 22, 0, 1, 
	1, 87, 76, 
	10, 1, 35, 
	2, 47, 0, 22, 
	1, 54, 76, 
	10, 1, 35, 
	2, 49, 0, 23, 
	1, 54, 76, 
	13, 22, 46, 
	3, 48, 4, 15, 0, 19, 
	1, 58, 
	13, 22, 46, 
	3, 48, 2, 38, 0, 19, 
	1, 58, 
	9, 10, 68, 
	3, 59, 0, 59, 
	1, 74, 
	9, 10, 68, 
	4, 24, 0, 59, 
	1, 74, 
	11, 36, 52, 
	2, 58, 14, 60, 
	2, 104, 27, 102, 
	10, 22, 68, 
	3, 59, 0, 59, 
	1, 59, 73, 
	203, 
	2, 58, 0, 60, 
	103, 104, 28, 53, 
	10, 1, 35, 
	2, 60, 0, 30, 
	1, 54, 76, 
	5, 40, 0, 
	4, 10, 
	1, 105, 
	7, 7, 0, 
	2, 58, 
	104, 106, 49, 61, 
	10, 50, 70, 
	3, 61, 0, 61, 
	1, 59, 73, 
	205, 
	3, 28, 0, 28, 0, 20, 
	72, 37, 
	197, 
	14, 20, 
	6, 32, 
	15, 36, 60, 
	3, 69, 14, 13, 0, 13, 
	1, 34, 5, 74, 
	22, 43, 90, 
	8, 21, 3, 71, 3, 68, 0, 68, 0, 69, 
	1, 72, 73, 
	196, 
	0, 21, 
	60, 
	5, 55, 60, 
	0, 21, 
	46, 58, 
	6, 36, 90, 
	3, 71, 
	1, 2, 116, 
	0, 55, 0, 
	46, 
	0, 61, 0, 
	119, 
	0, 50, 94, 
	118, 
	0, 74, 0, 
	46, 
	10, 60, 0, 
	4, 22, 0, 1, 
	1, 87, 76, 
	3, 42, 0, 
	1, 2, 3, 4, 
	11, 70, 0, 
	4, 16, 9, 4, 
	35, 42, 107, 61, 
	2, 60, 0, 
	3, 4, 25, 
	17, 50, 26, 
	1, 34, 2, 55, 0, 55, 0, 56, 
	73, 72, 
	206, 
	0, 3, 0, 4, 0, 34, 
	37, 72, 59, 
	9, 50, 26, 
	1, 34, 0, 34, 
	59, 32, 
	10, 7, 0, 
	0, 13, 4, 17, 
	1, 129, 60, 
	0, 34, 0, 
	46, 
	14, 25, 34, 
	8, 10, 3, 42, 0, 10, 
	60, 73, 37, 
	197, 
	1, 42, 
	15, 61, 
	207, 
	8, 15, 2, 42, 0, 42, 
	59, 18, 57, 76, 
	199, 
	14, 42, 
	88, 88, 88, 88, 
	199, 
	14, 42, 
	88, 56, 70, 76, 
	196, 
	0, 42, 
	59, 
	4, 70, 0, 
	4, 16, 
	118, 
	4, 70, 0, 
	4, 20, 
	118, 
	3, 83, 0, 
	1, 3, 4, 25, 
	19, 25, 18, 
	8, 10, 0, 10, 4, 9, 0, 63, 
	1, 60, 53, 37, 
	11, 25, 0, 
	8, 10, 0, 10, 
	60, 1, 42, 32, 
	1, 22, 0, 
	6, 109, 
	2, 28, 0, 
	3, 4, 25, 
	2, 32, 0, 
	3, 4, 25, 
	3, 80, 0, 
	1, 3, 4, 25, 
	0, 10, 94, 
	118, 
	6, 7, 0, 
	0, 13, 
	1, 85, 60, 
	14, 50, 74, 
	1, 45, 9, 6, 0, 6, 
	37, 58, 73, 
	200, 
	4, 22, 0, 45, 
	59, 
	200, 
	4, 23, 0, 45, 
	59, 
	193, 
	80, 76, 
	11, 91, 106, 
	3, 43, 0, 1, 
	1, 127, 54, 76, 
	9, 90, 0, 
	3, 3, 3, 34, 
	66, 126, 
	2, 90, 0, 
	6, 36, 12, 
	2, 43, 0, 
	6, 3, 25, 
	3, 36, 0, 
	2, 3, 4, 76, 
	10, 1, 22, 
	4, 2, 0, 16, 
	1, 54, 76, 
	4, 1, 83, 
	4, 0, 
	51, 
	15, 25, 0, 
	8, 2, 0, 2, 0, 50, 
	60, 53, 3, 25, 
	10, 6, 5, 
	4, 14, 0, 11, 
	1, 54, 76, 
	9, 6, 6, 
	4, 14, 3, 75, 
	6, 122, 
	14, 6, 6, 
	4, 14, 5, 75, 0, 13, 
	1, 54, 76, 
	14, 1, 35, 
	4, 14, 8, 23, 0, 18, 
	1, 54, 76, 
	14, 1, 35, 
	4, 18, 8, 23, 0, 14, 
	1, 54, 76, 
	0, 1, 50, 
	118, 
	0, 96, 0, 
	46, 
	255,
};


const uint8_t verbs[] = {
65, 85, 84, 79, 32,
71, 79, 32, 32, 32,
195, 82, 79, 83, 83,
210, 85, 78, 32, 32,
197, 78, 84, 69, 82,
195, 76, 73, 77, 66,
87, 65, 76, 75, 32,
83, 65, 89, 32, 32,
217, 69, 76, 76, 32,
211, 67, 82, 69, 65,
71, 69, 84, 32, 32,
212, 65, 75, 69, 32,
208, 73, 67, 75, 32,
195, 65, 82, 82, 89,
200, 79, 76, 68, 32,
213, 78, 84, 73, 69,
210, 69, 77, 79, 86,
208, 73, 67, 75, 85,
68, 82, 79, 80, 32,
204, 69, 65, 86, 69,
208, 85, 84, 32, 32,
210, 69, 76, 69, 65,
84, 72, 82, 79, 87,
212, 79, 83, 83, 32,
194, 76, 79, 87, 32,
65, 84, 32, 32, 32,
212, 79, 87, 65, 82,
83, 65, 86, 69, 32,
80, 85, 83, 72, 32,
208, 82, 69, 83, 83,
200, 73, 84, 32, 32,
203, 73, 67, 75, 32,
80, 85, 76, 76, 32,
212, 85, 71, 32, 32,
68, 82, 89, 32, 32,
46, 32, 32, 32, 32,
76, 79, 79, 75, 32,
204, 32, 32, 32, 32,
196, 69, 83, 67, 82,
197, 88, 65, 77, 73,
75, 78, 79, 67, 75,
212, 65, 80, 32, 32,
68, 73, 71, 32, 32,
85, 83, 69, 32, 32,
215, 73, 84, 72, 32,
213, 83, 73, 78, 71,
68, 65, 77, 78, 32,
196, 65, 77, 32, 32,
195, 85, 82, 83, 69,
46, 32, 32, 32, 32,
67, 65, 83, 84, 32,
201, 78, 86, 79, 75,
67, 72, 79, 80, 32,
195, 85, 84, 32, 32,
211, 76, 73, 67, 69,
79, 80, 69, 78, 32,
213, 78, 76, 79, 67,
195, 76, 79, 83, 69,
68, 82, 73, 78, 75,
212, 65, 83, 84, 69,
74, 85, 77, 80, 32,
66, 82, 69, 65, 84,
72, 89, 80, 69, 82,
70, 65, 83, 84, 69,
210, 69, 80, 76, 65,
212, 73, 71, 72, 84,
211, 69, 67, 85, 32,
83, 67, 79, 82, 69,
46, 32, 32, 32, 32,
46, 32, 32, 32, 32,
83, 87, 73, 77, 32,
81, 85, 73, 84, 32,
73, 78, 86, 69, 78,
201, 78, 86, 69, 32,
82, 65, 73, 83, 69,
204, 73, 70, 84, 32,
194, 82, 69, 65, 75,
211, 77, 65, 83, 72,
213, 78, 82, 65, 86,
205, 79, 86, 69, 32,
83, 81, 85, 69, 69,
215, 82, 73, 78, 71,
211, 81, 85, 69, 90,
70, 69, 69, 76, 32,
212, 79, 85, 67, 72,
196, 65, 78, 67, 69,
215, 65, 86, 69, 32,
204, 73, 83, 84, 69,
211, 73, 78, 71, 32,
215, 65, 83, 72, 32,
72, 69, 76, 80, 32,
87, 65, 75, 69, 78,
193, 87, 65, 75, 69,
215, 65, 75, 69, 32,
32, 32, 32, 32, 32,
68, 73, 86, 69, 32,
76, 73, 71, 72, 84,
194, 85, 82, 78, 32,
201, 71, 78, 73, 84,
194, 85, 73, 76, 68,
205, 65, 75, 69, 32,
195, 79, 79, 75, 32,
215, 65, 83, 72, 32,
204, 79, 87, 69, 82,
203, 73, 76, 76, 32,
211, 76, 65, 89, 32,
195, 76, 69, 65, 78,
32, 32, 32, 32, 32,
32, 32, 32, 32, 32,
32, 32, 32, 32, 32,
	0,
};
const uint8_t nouns[] = {
65, 78, 89, 32, 32,
78, 79, 82, 84, 72,
83, 79, 85, 84, 72,
69, 65, 83, 84, 32,
87, 69, 83, 84, 32,
85, 80, 32, 32, 32,
68, 79, 87, 78, 32,
67, 79, 85, 82, 84,
70, 79, 85, 78, 84,
67, 69, 78, 84, 69,
77, 73, 82, 82, 79,
70, 73, 82, 69, 32,
82, 79, 80, 69, 32,
67, 72, 65, 78, 68,
67, 69, 73, 76, 73,
210, 79, 79, 70, 32,
76, 79, 70, 84, 32,
70, 79, 82, 69, 83,
84, 82, 69, 69, 32,
212, 82, 69, 69, 83,
71, 76, 65, 83, 83,
67, 65, 83, 84, 76,
77, 79, 65, 84, 32,
215, 65, 84, 69, 82,
196, 82, 79, 80, 76,
208, 79, 79, 76, 32,
83, 69, 69, 68, 32,
83, 84, 65, 82, 32,
80, 79, 84, 73, 79,
65, 82, 79, 85, 78,
66, 82, 69, 65, 84,
68, 69, 69, 80, 32,
80, 69, 82, 77, 69,
66, 76, 73, 83, 83,
87, 79, 79, 68, 32,
72, 79, 76, 69, 32,
76, 65, 86, 65, 32,
211, 84, 82, 69, 65,
68, 82, 65, 87, 66,
71, 65, 77, 69, 32,
77, 69, 84, 72, 85,
73, 78, 86, 69, 78,
68, 82, 65, 73, 78,
66, 79, 84, 84, 79,
72, 79, 76, 69, 32,
79, 70, 70, 32, 32,
67, 82, 65, 84, 69,
194, 79, 88, 32, 32,
66, 82, 73, 67, 75,
87, 82, 73, 78, 75,
83, 84, 65, 73, 82,
70, 73, 82, 69, 70,
68, 82, 65, 71, 79,
76, 65, 73, 82, 32,
75, 73, 84, 67, 72,
68, 73, 90, 90, 89,
196, 69, 65, 78, 32,
76, 89, 67, 65, 78,
68, 79, 79, 82, 32,
83, 72, 65, 70, 84,
67, 65, 78, 32, 32,
76, 73, 71, 72, 84,
211, 81, 85, 65, 82,
66, 65, 76, 76, 82,
82, 79, 79, 77, 32,
87, 65, 76, 76, 32,
215, 65, 76, 76, 83,
198, 76, 79, 79, 82,
68, 85, 83, 84, 32,
87, 79, 82, 75, 83,
87, 73, 67, 75, 69,
209, 85, 69, 69, 78,
65, 87, 65, 89, 32,
67, 82, 65, 67, 75,
89, 79, 72, 79, 32,
84, 79, 87, 69, 76,
65, 83, 72, 69, 83,
85, 78, 82, 65, 86,
83, 69, 76, 70, 32,
205, 69, 32, 32, 32,
205, 89, 83, 69, 76,
217, 79, 85, 32, 32,
83, 69, 83, 65, 77,
66, 65, 84, 84, 76,
73, 67, 79, 78, 32,
78, 73, 67, 72, 69,
76, 79, 67, 75, 32,
67, 69, 76, 76, 32,
196, 85, 78, 71, 69,
79, 85, 84, 76, 69,
77, 69, 84, 65, 76,
195, 65, 78, 79, 80,
207, 80, 69, 78, 69,
67, 79, 85, 78, 84,
83, 80, 69, 76, 76,
83, 84, 79, 86, 69,
210, 65, 78, 71, 69,
207, 86, 69, 78, 32,
71, 82, 79, 84, 84,
67, 65, 66, 73, 78,
76, 69, 86, 69, 82,
72, 65, 78, 68, 83,
208, 65, 87, 32, 32,
82, 65, 84, 32, 32,
210, 65, 84, 83, 32,
83, 73, 78, 75, 32,
77, 79, 78, 83, 84,
69, 68, 71, 69, 32,
197, 68, 71, 69, 83,
32, 32, 32, 32, 32,
	0,
};
const uint8_t automap[] = {
83, 84, 65, 82, 32,
	0,
83, 84, 65, 82, 32,
	5,
83, 84, 65, 82, 32,
	6,
83, 84, 65, 82, 32,
	7,
83, 84, 65, 82, 32,
	8,
83, 84, 65, 82, 32,
	10,
83, 84, 65, 82, 32,
	11,
83, 84, 65, 82, 32,
	12,
83, 84, 65, 82, 32,
	13,
83, 84, 65, 82, 32,
	14,
83, 84, 65, 82, 32,
	15,
83, 84, 65, 82, 32,
	16,
83, 84, 65, 82, 32,
	17,
77, 73, 82, 82, 79,
	20,
70, 73, 82, 69, 32,
	24,
71, 76, 65, 83, 83,
	28,
77, 69, 84, 72, 85,
	33,
83, 69, 69, 68, 32,
	34,
80, 79, 84, 73, 79,
	35,
76, 73, 71, 72, 84,
	36,
80, 69, 82, 77, 69,
	40,
66, 76, 73, 83, 83,
	41,
87, 79, 79, 68, 32,
	42,
89, 79, 72, 79, 32,
	45,
67, 82, 65, 84, 69,
	48,
66, 82, 73, 67, 75,
	50,
70, 73, 82, 69, 70,
	57,
68, 85, 83, 84, 32,
	59,
87, 73, 67, 75, 69,
	61,
84, 79, 87, 69, 76,
	62,
65, 83, 72, 69, 83,
	63,
85, 78, 82, 65, 86,
	64,
84, 79, 87, 69, 76,
	65,
84, 79, 87, 69, 76,
	66,
67, 65, 78, 32, 32,
	68,
67, 65, 78, 32, 32,
	69,
68, 73, 90, 90, 89,
	70,
77, 69, 84, 65, 76,
	71,
76, 89, 67, 65, 78,
	73,
	0,
};
#include <stdio.h>	/* Not really used but needed for perror */
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <fcntl.h>
#include <setjmp.h>
#include <termios.h>

#ifdef __linux__
#include <stdio.h>
#endif

static jmp_buf restart;

struct savearea {
  uint16_t magic;
  uint8_t carried;
  uint8_t lighttime;
  uint8_t location;
  uint8_t objloc[NUM_OBJ];
  uint8_t roomsave[6];
  uint8_t savedroom;
  uint32_t bitflags;
  int16_t counter;
  int16_t counter_array[16];
};

static char linebuf[81];
static char *nounbuf;
static char wordbuf[WORDSIZE + 1];

static uint8_t verb;
static uint8_t noun;
static const uint8_t *linestart;
static uint8_t linematch;
static uint8_t actmatch;
static uint8_t continuation;
static uint16_t *param;
static uint16_t param_buf[5];
static uint8_t redraw;

static struct savearea game;

static void error(const char *p);

#define VERB_GO		1
#define VERB_GET	10
#define VERB_DROP	18

#define LIGHTOUT	16
#define DARKFLAG	15
#define LIGHT_SOURCE	9

/* Define this because 1 << n might be 16bit */
#define ONEBIT		((uint32_t)1)

#define REDRAW		1
#define REDRAW_MAYBE	2

#ifdef CONFIG_IO_CURSES

#include <curses.h>

#define REDRAW_MASK	(REDRAW|REDRAW_MAYBE)

static char wbuf[81];
static int wbp = 0;
static uint8_t rows, cols;
static int xpos = 0, ypos = 0;
static int bottom;
static WINDOW *topwin, *botwin, *curwin;

static void flush_word(void)
{
  wbuf[wbp] = 0;
  waddstr(curwin, wbuf);
  xpos += wbp;
  wbp = 0;
}

static void new_line(void)
{
  xpos = 0;
  if (curwin == topwin)
    ypos++;
  else {
    scroll(curwin);
    ypos = bottom;
  }
  wmove(curwin, ypos, xpos);
}

static void char_out(char c)
{
  if (c == '\n') {
    flush_word();
    new_line();
    return;
  }
  if (c != ' ') {
    if (wbp < 80)
      wbuf[wbp++] = c;
    return;
  }
  if (xpos + wbp >= cols)
    new_line();
  flush_word();
  waddch(curwin, ' ');
  xpos++;
}

static void strout_lower(const char *p)
{
  while(*p)
    char_out(*p++);
}

static void strout_lower_spc(const char *p)
{
  strout_lower(p);
  char_out(' ');
}

static void decout_lower(uint16_t v)
{
#ifdef __linux__
  char buf[9];
  snprintf(buf, 8, "%d", v);	/* FIXME: avoid expensive snprintf */
  strout_lower(buf);
#else
  strout_lower(_itoa(v));
#endif
}

static void strout_upper(const char *p)
{
  strout_lower(p);
}

static char readchar(void)
{
  wrefresh(botwin);
  return wgetch(botwin);
}

static void line_input(int m)
{
  int c;
  char *p = linebuf;

  do {
    wmove(botwin, ypos, xpos);
    wrefresh(botwin);
    c = wgetch(botwin);
    if (c == 8 || c == 127) {
      if (p > linebuf) {
        xpos--;
        mvwaddch(botwin, ypos, xpos, ' ');
        p--;
      }
      continue;
    }
    if (c > 31 && c < 127) {
      if (p < linebuf + 80 && xpos < cols - 1) {
        *p++ = c;
        mvwaddch(botwin, ypos, xpos, c);
        xpos++;
      }
      continue;
    }
  }
  while (c != 13 && c != 10);
  *p = 0;
  new_line();
}

static int saved_x;

static void begin_upper(void)
{
  saved_x = xpos;
  curwin = topwin;
  werase(topwin);
  ypos = 0;
  xpos = 0;
}

static void end_upper(void)
{
  flush_word();
  curwin = botwin;
  xpos = saved_x;
  ypos = bottom;
  wrefresh(topwin);
}

static void display_init(void)
{
  int trow;

  initscr();
  noecho();
  cbreak();
  nonl();

  getmaxyx(stdscr, rows, cols);

  if (rows < 16)
    error("display too small");

  trow = 10;
  if (rows / 2 < 10)
    trow = rows / 2;
  bottom = rows - trow;

  topwin = newwin(trow, cols, 0, 0);
  botwin = newwin(bottom--, cols, trow, 0);
  if (!topwin || !botwin)
    error("curses");
  scrollok(botwin, TRUE);
  curwin = botwin;
  new_line();
}

static void display_exit(void)
{
  endwin();
}

#elif defined(CONFIG_IO_CUSS)

/* ---- */

#include <termcap.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/wait.h>
#include <termios.h>

/* A mini look alike to David Given's libcuss. If useful will probably
   become a library. For now pasted around to experiment */

uint_fast8_t screenx, screeny, screen_height, screen_width;

static char *t_go, *t_clreol, *t_clreos;
static char conbuf[64];
static char *conp = conbuf;

extern void con_puts(const char *s);

/* Queue a character to the output buffer */
static int conq(int c)
{
	if (conp == conbuf + sizeof(conbuf)) {
		write(1, conbuf, sizeof(conbuf));
		conp = conbuf;
	}
	*conp++ = (uint8_t) c;
	return 0;
}

/* Make sure the output buffer is written */
void con_flush(void)
{
	write(1, conbuf, conp - conbuf);
	conp = conbuf;
}

static const char hex[] = "0123456789ABCDEF";

/* Put a character to the screen. We handle unprintables and tabs */
void con_putc(char c)
{
	if (c == '\t') {
		uint8_t n = 8 - (screenx & 7);
		while (n--)
			con_putc(' ');
		return;
	}
	if (c > 127) {
		con_puts("\\x");
		con_putc(hex[c >> 4]);
		con_putc(hex[c & 0x0F]);
		return;
	} else if (c == 127) {
		con_puts("^?");
		return;
	}
	if (c < 32) {
		con_putc('^');
		c += '@';
	}
	conq(c);
	screenx++;
	if (screenx == screen_width) {
		screenx = 0;
		screeny++;
	}
}

/* Write a termcap string out */
static void con_twrite(char *p, int n)
{
#if !defined(__linux__)
	tputs(p, n, conq);
#else
	while (*p)
		conq(*p++);
#endif
}

/* Write a string of symbols including quoting */
void con_puts(const char *s)
{
	char c;
	while ((c =  *s++) != 0)
		con_putc(c);
}

/* Add a newline */
void con_newline(void)
{
	if (screeny >= screen_height)
		return;
	conq('\n');
	screenx = 0;
	screeny++;
}

/* We need to optimize this but firstly we need to fix our
   tracking logic as we use con_goto internally but don't track
   that verus the true user values */
void con_force_goto(uint_fast8_t y, uint_fast8_t x)
{
	con_twrite(tgoto(t_go, x, y), 2);
	screenx = x;
	screeny = y;
}

void con_goto(uint_fast8_t y, uint_fast8_t x)
{
#if 0
	if (screenx == x && screeny == y)
		return;
	if (screeny == y && x == 0) {
		conq('\r');
		screenx = 0;
		return;
	}
	if (screeny == y - 1 && x == 0) {
		con_newline();
		return;
	}
#endif	
	con_force_goto(y, x);
}

/* Clear to end of line */
void con_clear_to_eol(void)
{
	if (screenx == screen_width - 1)
		return;
	if (t_clreol)
		con_twrite(t_clreol, 1);
	else {
		uint_fast8_t i;
		/* Write spaces. This tends to put the cursor where
		   we want it next time too. Might be worth optimizing ? */
		for (i = screenx; i < screen_width; i++)
			con_putc(' ');
	}
}

/* Clear to the bottom of the display */

void con_clear_to_bottom(void)
{
	/* Most terminals have a clear to end of screen */
	if (t_clreos)
		con_twrite(t_clreos, screen_height);
	/* If not then clear each line, which may in turn emit
	   a lot of spaces in desperation */
	else {
		uint_fast8_t i;
		for (i = 0; i < screen_height; i++) {
			con_goto(i, 0);
			con_clear_to_eol();
		}
	}
	con_force_goto(0, 0);
}

void con_clear(void)
{
	con_goto(0, 0);
	con_clear_to_bottom();
}

int con_scroll(int n)
{
	if (n == 0)
		return 0;
	/* For now we don't do backscrolls: FIXME */
	if (n < 0)
		return 1;
	/* Scrolling down we can do */
	con_force_goto(screen_height - 1, 0);
	while (n--)
		conq('\n');
	con_force_goto(screeny, screenx);
	return 0;
}

/* TODO: cursor key handling */
int con_getch(void)
{
	uint8_t c;
	con_flush();
	if (read(0, &c, 1) != 1)
		return -1;
	return c;
}

int con_size(uint8_t c)
{
	if (c == '\t')
		return 8 - (screenx & 7);
	/* We will leave unicode out 8) */
	if (c > 127)
		return 4;
	if (c < 32 || c == 127)
		return 2;
	return 1;
}

static int do_read(int fd, void *p, int len)
{
	int l;
	if ((l = read(fd, p, len)) != len) {
		if (l < 0)
			perror("read");
		else
			write(2, "short read from tchelp.\n", 25);
		return -1;
	}
	return 0;
}

static char *tnext(char *p)
{
	return p + strlen(p) + 1;
}

static int tty_init(void)
{
	int fd[2];
	pid_t pid;
	int ival[3];
	int status;

	if (pipe(fd) < 0) {
		perror("pipe");
		return -1;
	}

	pid = fork();
	if (pid == -1) {
		perror("fork");
		return -1;
	}

	if (pid == 0) {
		close(fd[0]);
		dup2(fd[1], 1);
		execl("/usr/lib/tchelp", "tchelp", "li#co#cm$ce$cd$cl$", NULL);
		perror("tchelp");
		_exit(1);
	}
	close(fd[1]);
	waitpid(pid, &status, 0);

	do_read(fd[0], ival, sizeof(int));
	if (ival[0] == 0)
		return -1;
	do_read(fd[0], ival + 1, 2 * sizeof(int));

	ival[0] -= 2 * sizeof(int);
	t_go = sbrk((ival[0] + 3) & ~3);

	if (t_go == (void *) -1) {
		perror("sbrk");
		return -1;
	}

	if (do_read(fd[0], t_go, ival[0]))
		return -1;

	close(fd[0]);
	t_clreol = tnext(t_go);
	t_clreos = tnext(t_clreol);
	if (*t_clreos == 0)	/* No clr eos - try for clr/home */
		t_clreos++;	/* cl cap if present */
	if (*t_go == 0) {
		write(2, "Insufficient terminal features.\n", 32);
		return -1;
	}
	/* TODO - screen sizes */
	screen_height = ival[1];
	screen_width = ival[2];
	/* need to try WINSZ and VT ioctls */
	return 0;
}

static struct termios con_termios, old_termios;

void con_exit(void)
{
	tcsetattr(0, TCSANOW, &old_termios);
}

int con_init(void)
{
	int n;
	static struct winsize w;
	if (tty_init())
		return -1;
	if (tcgetattr(0, &con_termios) == -1)
		return -1;
	memcpy(&old_termios, &con_termios, sizeof(struct termios));
	atexit(con_exit);
	con_termios.c_lflag &= ~(ICANON | ECHO | ISIG);
	con_termios.c_iflag &= ~(IXON);
	con_termios.c_cc[VMIN] = 1;
	con_termios.c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSANOW, &con_termios) == -1)
		return -1;
#ifdef VTSIZE
	n = ioctl(0, VTSIZE, 0);
	if (n != -1) {
		screen_width = n & 0xFF;
		screen_height = (n >> 8) & 0xFF;
	}
#endif
	if (ioctl(0, TIOCGWINSZ, &w) == 0) {
		if (w.ws_col)
			screen_width = w.ws_col;
		if (w.ws_row)
			screen_height = w.ws_row;
	}
	return 0;
}


/* ---- */

/* Glue to the library */

#define REDRAW_MASK	0

static char wbuf[81];
static int wbp = 0;
static int upper;

static void display_exit(void)
{
  con_newline();
  con_flush();
}

static void display_init(void)
{
  if (con_init())
    exit(1);
  con_clear();
  con_goto(screen_height - 1, 0);
}

static void flush_word(void)
{
  if (screenx)
    con_putc(' ');
  wbuf[wbp] = 0;
  con_puts(wbuf);
  wbp = 0;
}

static void move_on(void)
{
    /* Move on a line in the correct manner */
    if (upper) {
      con_clear_to_eol();
      con_newline();
    } else {
      con_scroll(1);
      con_goto(screen_height - 1, 0);
    }
}

static void char_out(char c)
{
  if (c != ' ' && c != '\n') {
    if (wbp < 80)
      wbuf[wbp++] = c;
    return;
  }
  /* Does the word not fit ? */
  if (screenx + wbp + 1 >= screen_width)
    move_on();
  /* Write out the word */
  flush_word();
  if (c == '\n')
    move_on();
}

static void strout_lower(const char *p)
{
  while(*p)
    char_out(*p++);
}

static void strout_lower_spc(const char *p)
{
  strout_lower(p);
  char_out(' ');
}

static void decout_lower(uint16_t v)
{
#ifdef __linux__
  char buf[9];
  snprintf(buf, 8, "%d", v);	/* FIXME: avoid expensive snprintf */
  strout_lower(buf);
#else
  strout_lower(_itoa(v));
#endif
}

static void strout_upper(const char *p)
{
  strout_lower(p);
}

static void action_look(void);

static void line_input(int m)
{
  int c;
  char *p = linebuf;

  if (m == 0)
    action_look();

  do {
    c = con_getch();
    if (c == 8 || c == 127) {
      if (p > linebuf) {
        con_goto(screen_height - 1, screenx - 1);
        con_putc(' ');
        con_goto(screen_height - 1, screenx - 1);
        p--;
      }
      continue;
    }
    if (c > 31 && c < 127) {
      if (p < linebuf + 80 && screenx < screen_width - 1) {
        *p++ = c;
        con_putc(c);
      }
      continue;
    }
  }
  while (c != 13 && c != 10);
  *p = 0;
  con_scroll(1);
  con_goto(screen_height - 1, 0);
}

static char readchar(void)
{
  line_input(1);
  return *linebuf;
}


static uint8_t ly, lx;

static void begin_upper(void)
{
  ly = screeny;
  lx = screenx;
  flush_word();
  con_goto(0,0);
  upper = 1;
}

char xbuf[] = "<@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@><@>";

static void end_upper(void)
{
  flush_word();
  con_clear_to_eol();
  con_newline();
  upper = 0;
  xbuf[screen_width] = 0;
  con_puts(xbuf);  
  con_goto(ly, lx);
}

#else

#include <stdio.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <sys/wait.h>
#include <termios.h>

#define REDRAW_MASK	REDRAW

static char wbuf[80];
static int wbp = 0;
static int xpos = 0;

static void display_init(void)
{
  char *c;
#ifdef TIOCGWINSZ
  struct winsize w;
  if (ioctl(0, TIOCGWINSZ, &w) != -1) {
    rows = w.ws_row;
    cols = w.ws_col;
    return;
  }
#elif VTSIZE
  int16_t v = ioctl(0, VTSIZE, 0);
  if (v != -1) {
    rows =  v >> 8;
    cols = v;
    return;
  }
#endif
  c = getenv("COLS");
  rows = 25;
  cols = c ? atoi(c): 80;
  if (cols == 0)
    cols = 80;
}

static void display_exit(void)
{
}

static void flush_word(void)
{
  write(1, wbuf, wbp);
  xpos += wbp;
  wbp = 0;
}

static void char_out(char c)
{
  if (c == '\n') {
    flush_word();
    write(1, "\n", 1);
    xpos = 0;
    return;
  }
  if (c != ' ') {
    if (wbp < 80)
      wbuf[wbp++] = c;
    return;
  }
  if (xpos + wbp >= cols) {
    xpos = 0;
    write(1,"\n", 1);
  }
  flush_word();
  write(1," ", 1);
  xpos++;
}

static void strout_lower(const char *p)
{
  while(*p)
    char_out(*p++);
}

static void strout_lower_spc(const char *p)
{
  strout_lower(p);
  char_out(' ');
}

static void decout_lower(uint16_t v)
{
#ifdef __linux__
  char buf[9];
  snprintf(buf, 8, "%d", v);	/* FIXME: avoid expensive snprintf */
  strout_lower(buf);
#else
  strout_lower(_itoa(v));
#endif
}

static void strout_upper(const char *p)
{
  strout_lower(p);
}


static void line_input(int m)
{
  int l = read(0, linebuf, sizeof(linebuf));
  if (l < 0)
    error("read");
  linebuf[l] = 0;
  if (l && linebuf[l-1] == '\n')
    linebuf[l-1] = 0;
}

static char readchar(void)
{
  line_input(0);
  return *linebuf;
}

static void begin_upper(void)
{
  strout_upper("\n\n\n\n");
}

static void end_upper(void)
{
  uint8_t l = cols;
  char_out('\n');
  while(l--)
    char_out('-');
  char_out('\n');
}



#endif

/******************** Common code ******************/

static uint8_t yes_or_no(void)
{
  char c;
  do {
    c = readchar();
    if (c == 'Y'  || c == 'y' || c == 'J' || c == 'j')
      return 1;
  } while(c != -1 && c != 'N' && c != 'n');
  return 0;
}

static void exit_game(uint8_t code)
{
  display_exit();
  exit(code);
}

static void error(const char *p)
{
  display_exit();
  write(2, p, strlen(p));
  exit(1);
}

static uint8_t random_chance(uint8_t v)
{
  v = v + v + (v >> 1);	/* scale as 0-249 */
  if (((rand() >> 3) & 0xFF) <= v)
    return 1;
  return 0;
}

static char *skip_spaces(char *p)
{
  while(*p && isspace(*p))
    p++;
  return p;
}

static char *copyword(char *p)
{
  char *t = wordbuf;
  p = skip_spaces(p);
  memset(wordbuf, ' ', WORDSIZE+1);
  while (*p && !isspace(*p) && t < wordbuf + WORDSIZE)
    *t++ = *p++;
  while(*p && !isspace(*p))
    p++;
  return p;
}

static int wordeq(const uint8_t *a, const char *b, uint8_t l)
{
  while(l--)
    if ((*a++ & 0x7F) != toupper(*b++))
      return 0;
  return 1;
}

static uint8_t whichword(const uint8_t *p)
{
  uint8_t code = 0;
  uint8_t i = 0;

  if (*wordbuf == 0 || *wordbuf == ' ')
    return 0;		/* No word */
  i--;
  
  do {
    i++;
    if (!(*p & 0x80))
      code = i;
    if (wordeq(p, wordbuf, WORDSIZE))
      return code;
    p += WORDSIZE;
  } while(*p != 0);
  return 255;
}

static void scan_noun(char *x)
{
  x = skip_spaces(x);
  nounbuf = x;
  copyword(x);
  noun = whichword(nouns);
}

static void scan_input(void)
{
  char *x = copyword(linebuf);
  verb = whichword(verbs);
  scan_noun(x);
}

void abbrevs(void)
{
  char *x = skip_spaces(linebuf);
  const char *p = NULL;
  if (x[1] != 0 && x[1] != ' ')
    return;
  switch(toupper(*x)) {
    case 'N': 
      p = "NORTH";
      break;
    case 'E':
      p = "EAST";
      break;
    case 'S':
      p = "SOUTH";
      break;
    case 'W':
      p = "WEST";
      break;
    case 'U':
      p = "UP";
      break;
    case 'D':
      p = "DOWN";
      break;
    case 'I':
      p = "INVEN";
      break;
  }
  if (p)
    strcpy(linebuf, p);
}
  
static const uint8_t *run_conditions(const uint8_t *p, uint8_t n)
{
  uint8_t i;
  
  for (i = 0; i < n; i++) {
    uint8_t opc = *p++;
    uint16_t par = *p++ | ((opc & 0xE0) >> 5);
    uint8_t op = game.objloc[par];
    opc &= 0x1F;

    switch(opc) {
      case 0:
        *param++ = par;
        break;
      case 1:
        if (op != 255)
          return NULL;
        break;
      case 2:
        if (op != game.location)
          return NULL;
        break;
      case 3:
        if (op != 255 && op != game.location)
          return NULL;
        break;
      case 4:
        if (game.location != par)
          return NULL;
        break;
      case 5:
        if (op == game.location)
          return NULL;
        break;
      case 6:
        if (op == 255)
          return NULL;
        break;
      case 7:
        if (game.location == par)
          return NULL;
        break;
      case 8:
        if (!(game.bitflags & (ONEBIT << par)))
          return NULL;
        break;
      case 9:
        if (game.bitflags & (ONEBIT << par))
          return NULL;
        break;
      case 10:
        if (!game.carried)
          return NULL;
        break;
      case 11:
        if (game.carried)
          return NULL;
        break;
      case 12:
        if (op == 255 || op == game.location)
          return NULL;
        break;
      case 13:
        if (op == 0)
          return NULL;
        break;
      case 14:
        if (op != 0)
          return NULL;
        break;
      case 15:
        if (game.counter > par)
          return NULL;
        break;
      case 16:
        if (game.counter < par)
          return NULL;
        break;
      case 17:
        if (op != objinit[par]) 
          return NULL;
        break;
      case 18:
        if (op == objinit[par])
          return NULL;
        break;
      case 19:
        if (game.counter != par)
          return NULL;
        break;
      default:
        error("BADCOND");
    }
  }
  return p;
}

uint8_t islight(void)
{
  uint8_t l = game.objloc[LIGHT_SOURCE];
  if (!(game.bitflags & (ONEBIT << DARKFLAG)))
    return 1;
  if (l == 255 || l == game.location)
    return 1;
  return 0;
}

static void action_look(void)
{
  const uint8_t *e;
  const char *p;
  uint8_t c;
  uint8_t f = 1;
  const char **op = objtext;

  redraw = 0;

  begin_upper();

  if (!islight()) {
    strout_upper(itsdark);
    end_upper();
    return;
  }
  p = locdata[game.location].text;
  e = locdata[game.location].exit;
  if (*p == '*')
    p++;
  else
    strout_upper(youare);
  strout_upper(p);
  strout_upper(newline);
  strout_upper(obexit);

  for (c = 0; c < 6; c++) {
    if (*e++) {
      if (f)
        f = 0;
      else
        strout_upper(dashstr);
      strout_upper(exitmsgptr[c]);
    }
  }
  if (f)
    strout_upper(nonestr);
  strout_upper(dotnewline);
  f = 1;
  e = game.objloc;
  while(e < game.objloc + NUM_OBJ) {
    if (*e++ == game.location) {
      if (f) {
        strout_upper(canalsosee);
        f = 0;
      } else
        strout_upper(dashstr);
      strout_upper(*op);
    }
    op++;
  }
  end_upper();
}

static void action_delay(void)
{
  sleep(2);
}

static void action_dead(void)
{
  strout_lower(dead);
  game.bitflags &= ~(ONEBIT << DARKFLAG);
  game.location = lastloc;
  action_look();
}

static void action_quit(void)
{
  strout_lower(playagain);
  if (yes_or_no())
    longjmp(restart, 0);
  exit_game(0);
}

static void action_score(void)
{
  uint8_t *p = game.objloc;
  const char **m = objtext;
  uint8_t t = 0, s = 0;

  while(p < game.objloc + NUM_OBJ) {
    if (*m[0] == '*') {
      t++;
      if (*p == treasure)
        s++;
    }
    m++;
    p++;
  }

  strout_lower(stored_msg);
  decout_lower(s);
  strout_lower(stored_msg2);
  decout_lower((s * (uint16_t)100) / t);
  strout_lower(dotnewline);
  if (s == t)
    action_quit();
}

static void action_inventory(void)
{
  uint8_t *p = game.objloc;
  const char **m = objtext;
  uint8_t f = 1;

  strout_lower(carrying);
  if (game.carried == 0)
    strout_lower(nothing);
  else {  
    while(p < game.objloc + NUM_OBJ) {
      if (*p == 255) {
        if (!f)
          strout_lower(dashstr);
        else
          f = 0;
        strout_lower(*m);
      }
      m++;
      p++;
    }
  }
  strout_lower(dotnewline);
}

static char *filename(void)
{
  strout_lower("File name ? ");
  line_input(1);
  return skip_spaces(linebuf);
}

static void action_save(void)
{
  int fd;
  char *p = filename();
  if (*p == 0)
    return;
  game.magic = GAME_MAGIC;
  fd = open(p, O_WRONLY|O_CREAT|O_TRUNC, 0600);
  if (fd == -1 || write(fd, &game, sizeof(game)) != sizeof(game) || close(fd) == -1)
    strout_lower("Save failed.\n");
  close(fd);	/* Double closing is safe for non error path */
}

static int action_restore(void)
{
  while(1) {
    char *p = filename();
    int fd;

    if (*p == 0)
      return 0;

    fd = open(p, O_RDONLY, 0600);

    if (fd != -1 && read(fd, &game, sizeof(game)) == sizeof(game) && close(fd) != -1 &&
        game.magic == GAME_MAGIC)
      return 1;

    strout_lower("Load failed.\n");
    close(fd);
  }
}
  
static void moveitem(uint8_t i, uint8_t l)
{
  uint8_t *p = game.objloc + i;
  if (*p == game.location)
    redraw |= REDRAW_MAYBE;
  if (l == game.location)
    redraw |= REDRAW;
  *p = l;
}

static void run_actions(const uint8_t *p, uint8_t n)
{
  uint8_t i;

  for (i = 0; i < n; i++) {
    uint8_t a = *p++;
    uint8_t tmp;
    uint16_t tmp16;

    if (a < 50) {
      strout_lower_spc(msgptr[a]);
      continue;
    }
    if (a > 102 ) {
      strout_lower_spc(msgptr[a - 50]);
      continue;
    }
    switch(a) {
      case 51:	/* nop - check */
        break;
      case 52:	/* Get */
        if (game.carried >= maxcar)
          strout_lower(toomuch);
        else
          moveitem(*param++, 255);
        break;
      case 53: /* Drop */
        moveitem(*param++, game.location);
        break;
      case 54: /* Go */
        game.location = *param++;
        redraw |= REDRAW;
        break;
      case 55: /* Destroy */
      case 59: /* ?? */
        moveitem(*param++, 0);
        break;
      case 56:	/* Set dark flag */
        game.bitflags |= (ONEBIT << DARKFLAG);
        break;
      case 57:	/* Clear dark flag */
        game.bitflags &= ~(ONEBIT << DARKFLAG);
        break;
      case 58:	/* Set bit */
        game.bitflags |= (ONEBIT << *param++);
        break;
      /* 59 see 55 */
      case 60:	/* Clear bit */
        game.bitflags &= ~(ONEBIT << *param++);
        break;
      case 61:	/* Dead */
        action_dead();
        break;
      case 64:	/* Look */
      case 76:	/* Also Look ?? */
        action_look();
        break;
      case 62:	/* Place obj, loc */
        tmp = *param++;
        moveitem(tmp, *param++);
        break;
      case 63:	/* Game over */
        action_quit();
      case 65:	/* Score */
        action_score();
        break;
      case 66:	/* Inventory */
        action_inventory();
      case 67:	/* Set bit 0 */
        game.bitflags |= (ONEBIT << 0);
        break;
      case 68:	/* Clear bit 0 */
        game.bitflags &= ~(ONEBIT << 0);
        break;
      case 69:	/* Refill lamp */
        game.lighttime = lightfill;
        game.bitflags &= ~(ONEBIT << LIGHTOUT);
        moveitem(LIGHT_SOURCE, 255);
        break;
      case 70:	/* Wipe lower */
        /* TODO */
        break;
      case 71:	/* Save */
        action_save();
        break;
      case 72:	/* Swap two objects */
        tmp = game.objloc[*param];
        moveitem(*param, game.objloc[param[1]]);
        moveitem(param[1], tmp);
        param += 2;
        break;
      case 73:
        continuation = 1;
        break;
      case 74:	/* Get without weight rule */
        moveitem(*param++, 255);
        break;
      case 75:	/* Put one item by another */
        moveitem(*param, game.objloc[param[1]]);
        param += 2;
        break;
      case 77:	/* Decrement counter */
        if (game.counter >= 0)
          game.counter--;
        break;
      case 78:	/* Display counter */
        decout_lower(game.counter);
        break;
      case 79:	/* Set counter */
        game.counter = *param++;
        break;
      case 80:	/* Swap player and saved room */
        tmp = game.savedroom;
        game.savedroom = game.location;
        game.location = tmp;
        redraw |= REDRAW;
        break;
      case 81:	/* Swap counter and counter n */
        tmp16 = game.counter;
        game.counter = game.counter_array[*param];
        game.counter_array[*param++] = tmp16;
        break;
      case 82:	/* Add to counter */
        game.counter += *param++;
        break;
      case 83:	/* Subtract from counter */
        game.counter -= *param++;
        if (game.counter < 0)
          game.counter = -1;
        break;
      case 84:	/* Print noun, newline */
        strout_lower(nounbuf);
        /* Fall through */
      case 86:	/* Print newline */
        strout_lower(newline);
        break;
      case 85:	/* Print noun */ 
        strout_lower(nounbuf);
        break;
      case 87: /* Swap player and saveroom array entry */
        tmp16 = *param++;
        tmp = game.roomsave[tmp16];
        game.roomsave[tmp16] = game.location;
        if (tmp != game.location) {
          game.location = tmp;
          redraw |= REDRAW;
        }
        break;
      case 88:
        action_delay();
        break;
      case 89:
        param++;		/* SAGA etc specials */
        break;
      default:
        error("BADACT");
    }
  }
}

void next_line(void)
{
  uint8_t c = *linestart++;
  if (!(c & 0x80))
    linestart += 2;	/* Skip verb/noun */
  else if (!(c & 0x60))
    linestart++;	/* Skip random value */
  linestart += (c & 3) + 1;	/* Actions 1 - 4 */
  c >>= 1;
  c &= 0x0E;		/* 2 x conditions */
  linestart += c;
}

void run_line(const uint8_t *ptr, uint8_t c, uint8_t a)
{
  memset(param_buf, 0, sizeof(param_buf));
  param = param_buf;
  if (c)
    ptr = run_conditions(ptr, c);
  if (ptr) {
    actmatch = 1;
    param = param_buf;
    run_actions(ptr, a);
  }
  next_line();
}

void run_table(const uint8_t *tp)
{
  continuation = 0;
  linestart = tp;
  while(1) {
    uint8_t hdr;
    uint8_t c, a;
    tp = linestart;
    hdr = *tp++;
    c = (hdr >> 2) & 0x07;
    a = (hdr & 3) + 1;
    
/*    printf("H%02X c = %d a = %d\n", hdr, c, a); */
    if (hdr == 255)
      return;		/* End of table */
    if (hdr & 0x80) {
      if (hdr & 0x40) {	/* Auto 0 */
        if (continuation)
          run_line(tp, c, a);
        else
          next_line();
        continue;
      }
      continuation = 0;
      if (!(hdr & 0x20)) {	/* Auto number */
        if (random_chance(*tp++))
          run_line(tp, c, a);
        else
          next_line();
        continue;
      }
      run_line(tp, c, a);
    } else {
      if (actmatch)
        return;
/*      printf("VN %d %d\n", *tp, tp[1]); */
      linematch = 1;
      continuation = 0;
      if (*tp++ == verb && (*tp == noun || *tp == 0))
        run_line(tp+1, c, a);
      else
        next_line();
    }
  }
}

uint8_t autonoun(uint8_t loc)
{
  const uint8_t *p = automap;
  if (*wordbuf == ' ' || *wordbuf == 0)
    return 255;
  while(*p) {
    if (strncasecmp((const char *)p, wordbuf, WORDSIZE) == 0 && game.objloc[p[WORDSIZE]] == loc)
      return p[WORDSIZE];
    p += WORDSIZE + 1;
  }
  return 255;
}
  
void run_command(void)
{
  uint8_t tmp;
  run_table(actions);
  if (actmatch)
    return;
  if (verb == VERB_GET) {		/* Get */
    if (noun == 0)
      strout_lower(whatstr);
    else if (game.carried >= maxcar)
      strout_lower(toomuch);
    else {
      tmp = autonoun(game.location);
      if (tmp == 255)
        strout_lower(beyondpower);
      else
        moveitem(tmp, 255);
    }
    actmatch = 1;
    return;
  }
  if (verb == VERB_DROP) {		/* Drop */
    if (noun == 0)
      strout_lower(whatstr);
    else {
      tmp = autonoun(255);
      if (tmp == 255)
        strout_lower(beyondpower);
      else
        moveitem(tmp, game.location);
    }
    actmatch = 1;
    return;
  }
}

void process_light(void)
{
  uint8_t l;
  if ((l = game.objloc[LIGHT_SOURCE]) == 0)
    return;
  if (game.lighttime == 255)
    return;
  if (!--game.lighttime) {
    game.bitflags &= ~(ONEBIT << LIGHTOUT);	/* Check clear ! */
    if (l == 255 || l == game.location) {
      strout_lower(lightout);
      redraw |= REDRAW_MAYBE;
      return;
    }
  }
  if (game.lighttime > 25)
    return;
  strout_lower(lightoutin);
  decout_lower(game.lighttime);
  strout_lower(game.lighttime == 1 ? turn : turns);
}

void main_loop(void)
{
  uint8_t first = 1;
  char *p;

  action_look();
  
  while (1) {
    if (!first)
      process_light();
    else
      first = 0;
    verb = 0;
    noun = 0;

    run_table(status);

    if (redraw & REDRAW_MASK)
      action_look();
    strout_lower(whattodo);

    do {
      do {
        strout_lower(prompt);
        line_input(0);
        abbrevs();
        p = skip_spaces(linebuf);
      }
      while(*p == 0);

      scan_noun(p);
      if (noun && noun <= 6) {
        verb = VERB_GO;
        break;
      }
      scan_input();
      if (verb == 255)
        strout_lower(dontknow);
    } while (verb == 255);
    
    if (verb == VERB_GO) {
      if (!noun) {
        strout_lower(givedirn);
        continue;
      }
      if (noun <= 6) {
        uint8_t light = islight();
        uint8_t dir;

        if (!light)
          strout_lower(darkdanger);
        dir = locdata[game.location].exit[noun - 1];
        if (!dir) {
          if (!light) {
            strout_lower(brokeneck);
            action_delay();
            action_dead();
            continue;
          }
          strout_lower(cantgo);
          continue;
        }
        game.location = dir;
        redraw |= REDRAW;
        continue;
      }
    }
    linematch = 0;
    actmatch = 0;
    run_command();
    if (actmatch)
      continue;
    if (linematch) {
      strout_lower(notyet);
      continue;
    }
    strout_lower(dontunderstand);
  }
}

void start_game(void)
{
  memcpy(game.objloc, objinit, sizeof(game.objloc));
  game.bitflags = 0;
  game.counter = 0;
  memset(game.counter_array, 0, sizeof(game.counter_array));
  game.savedroom = 0;
  memset(game.roomsave, 0, sizeof(game.roomsave));
  game.location = startloc;
  game.lighttime = startlamp;
  game.carried = startcarried;
}

int main(int argc, char *argv[])
{
  display_init();
  setjmp(restart);
  strout_lower("Restore a saved game ? ");
  if (!yes_or_no() || !action_restore())
    start_game();
  main_loop();
}
