#define NUM_OBJ 63
#define WORDSIZE 4
#define GAME_MAGIC 515
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
const uint8_t startlamp = 200;
const uint8_t lightfill = 200;
const uint8_t startcarried = 0;
const uint8_t maxcar = 6;
const uint8_t treasure = 0;
const uint8_t treasures = 0;
const uint8_t lastloc = 44;
const uint8_t startloc = 43;


const struct location locdata[] = {
		{ 	"\x2A\x20",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x68\x6F\x74\x20\x66\x65\x74\x69\x64\x20\x53\x77\x61\x6D\x70",
 { 11, 0, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x62\x79\x20\x61\x6E\x20\x41\x6E\x63\x69\x65\x6E\x74\x20\x53\x70\x68\x69\x6E\x78",
 { 0, 16, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x61\x20\x73\x61\x69\x6C\x69\x6E\x67\x20\x42\x72\x69\x67",
 { 23, 24, 28, 0, 0, 0 } }, 
		{ 	"\x43\x65\x6C\x6C\x61\x72",
 { 0, 0, 0, 0, 37, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x61\x20\x47\x72\x61\x73\x73\x79\x20\x50\x6C\x61\x69\x6E",
 { 5, 5, 5, 5, 0, 0 } }, 
		{ 	"\x54\x69\x6D\x65\x2D\x57\x61\x72\x70",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x30",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x30",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x30",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x73\x74\x72\x61\x6E\x67\x65\x20\x4D\x61\x63\x68\x69\x6E\x65",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x68\x6F\x74\x20\x66\x65\x74\x69\x64\x20\x53\x77\x61\x6D\x70",
 { 12, 1, 11, 11, 0, 0 } }, 
		{ 	"\x68\x6F\x74\x20\x66\x65\x74\x69\x64\x20\x53\x77\x61\x6D\x70",
 { 0, 11, 13, 12, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x62\x79\x20\x61\x20\x73\x74\x65\x61\x6D\x79\x20\x4C\x61\x6B\x65",
 { 0, 0, 0, 12, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x61\x20\x43\x61\x75\x73\x65\x77\x61\x79",
 { 0, 0, 0, 13, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x6F\x6E\x20\x61\x20\x74\x69\x6E\x79\x20\x49\x73\x6C\x61\x6E\x64",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x74\x72\x61\x63\x6B\x6C\x65\x73\x73\x20\x44\x65\x73\x65\x72\x74",
 { 2, 16, 16, 16, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x62\x79\x20\x61\x20\x53\x74\x6F\x6E\x65\x20\x57\x61\x6C\x6C",
 { 0, 18, 0, 0, 0, 0 } }, 
		{ 	"\x6C\x6F\x6E\x67\x20\x50\x61\x73\x73\x61\x67\x65",
 { 17, 19, 0, 0, 0, 0 } }, 
		{ 	"\x57\x65\x61\x70\x6F\x6E\x20\x52\x6F\x6F\x6D",
 { 18, 0, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x61\x74\x20\x74\x68\x65\x20\x74\x6F\x70\x20\x6F\x66\x20\x61\x20\x53\x74\x61\x74\x75\x65",
 { 0, 0, 0, 0, 0, 21 } }, 
		{ 	"\x73\x6D\x61\x6C\x6C\x20\x54\x65\x6D\x70\x6C\x65",
 { 0, 0, 0, 17, 0, 0 } }, 
		{ 	"\x77\x69\x6E\x64\x69\x6E\x67\x20\x54\x75\x6E\x6E\x65\x6C",
 { 21, 2, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x62\x79\x20\x74\x68\x65\x20\x46\x6F\x72\x65\x6D\x61\x73\x74",
 { 0, 3, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x61\x66\x74\x20\x62\x79\x20\x74\x68\x65\x20\x52\x69\x67\x67\x69\x6E\x67",
 { 3, 0, 0, 0, 0, 0 } }, 
		{ 	"\x53\x68\x69\x70\x27\x73\x20\x50\x61\x6E\x74\x72\x79",
 { 0, 0, 26, 0, 0, 0 } }, 
		{ 	"\x44\x65\x63\x6B\x68\x6F\x75\x73\x65",
 { 0, 30, 27, 25, 28, 0 } }, 
		{ 	"\x43\x61\x62\x69\x6E",
 { 0, 0, 0, 26, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x62\x79\x20\x74\x68\x65\x20\x44\x65\x63\x6B\x68\x6F\x75\x73\x65",
 { 0, 0, 0, 3, 0, 0 } }, 
		{ 	"\x43\x72\x6F\x77\x73\x2D\x4E\x65\x73\x74",
 { 0, 0, 0, 0, 0, 24 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x69\x6E\x20\x74\x68\x65\x20\x43\x61\x70\x74\x61\x69\x6E\x27\x73\x20\x43\x61\x62\x69\x6E",
 { 26, 0, 0, 0, 0, 0 } }, 
		{ 	"\x2A\x49\x20\x73\x65\x65\x20\x61\x20\x48\x6F\x75\x73\x65\x20\x74\x6F\x20\x74\x68\x65\x20\x4E\x6F\x72\x74\x68",
 { 34, 43, 35, 31, 0, 0 } }, 
		{ 	"\x51\x75\x61\x67\x6D\x69\x72\x65\x2E\x2E\x49\x27\x6D\x20\x53\x69\x6E\x6B\x69\x6E\x67\x21",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x64\x65\x6E\x73\x65\x20\x46\x6F\x67\x20\x6F\x6E\x20\x74\x68\x65\x20\x4D\x6F\x6F\x72\x73",
 { 35, 31, 33, 32, 0, 0 } }, 
		{ 	"\x44\x6F\x6F\x72\x77\x61\x79",
 { 0, 31, 0, 36, 0, 0 } }, 
		{ 	"\x64\x65\x6E\x73\x65\x20\x46\x6F\x67\x20\x6F\x6E\x20\x74\x68\x65\x20\x4D\x6F\x6F\x72\x73",
 { 35, 0, 43, 33, 0, 0 } }, 
		{ 	"\x2A\x49\x27\x6D\x20\x62\x79\x20\x61\x20\x57\x69\x6E\x64\x6F\x77",
 { 0, 0, 34, 0, 0, 0 } }, 
		{ 	"\x48\x61\x6C\x6C\x77\x61\x79",
 { 0, 0, 0, 39, 0, 0 } }, 
		{ 	"\x44\x45\x50\x4F",
 { 0, 0, 0, 0, 0, 0 } }, 
		{ 	"\x53\x74\x75\x64\x79",
 { 0, 0, 37, 0, 0, 0 } }, 
		{ 	"\x47\x65\x6E\x65\x72\x61\x74\x6F\x72\x20\x52\x6F\x6F\x6D",
 { 0, 0, 41, 0, 0, 0 } }, 
		{ 	"\x43\x6F\x72\x72\x69\x64\x6F\x72",
 { 0, 0, 0, 40, 5, 0 } }, 
		{ 	"\x47\x75\x61\x72\x64\x2D\x52\x6F\x6F\x6D",
 { 0, 0, 41, 0, 0, 0 } }, 
		{ 	"\x64\x65\x6E\x73\x65\x20\x46\x6F\x67\x20\x6F\x6E\x20\x74\x68\x65\x20\x4D\x6F\x6F\x72\x73",
 { 35, 32, 43, 43, 0, 0 } }, 
		{ 	"\x2A\x4D\x79\x20\x54\x49\x4D\x45\x20\x69\x73\x20\x75\x70\x2E\x2E\x2E\x49\x27\x6D\x20\x44\x45\x41\x44\x21",
 { 0, 0, 0, 0, 0, 0 } }, 
};
const uint8_t objinit[] = {
	32,
	34,
	39,
	39,
	0,
	0,
	0,
	0,
	0,
	0,
	4,
	4,
	0,
	23,
	23,
	29,
	0,
	27,
	25,
	25,
	30,
	30,
	13,
	14,
	2,
	18,
	19,
	19,
	0,
	0,
	0,
	0,
	42,
	0,
	4,
	10,
	0,
	0,
	10,
	34,
	0,
	13,
	41,
	21,
	28,
	20,
	0,
	0,
	2,
	37,
	0,
	0,
	0,
	5,
	0,
	6,
	0,
	0,
	0,
	40,
	41,
	0,
	0,
};


const char *objtext[] = {
	"\x53\x6D\x61\x6C\x6C\x20\x42\x75\x73\x68",
	"\x47\x6C\x6F\x76\x65\x73",
	"\x50\x61\x69\x6E\x74\x69\x6E\x67",
	"\x44\x72\x61\x77\x65\x72",
	"\x4F\x70\x65\x6E\x20\x44\x72\x61\x77\x65\x72",
	"\x4B\x65\x79",
	"\x50\x69\x73\x74\x6F\x6C",
	"\x43\x72\x6F\x77\x62\x61\x72",
	"\x42\x72\x6F\x6B\x65\x6E\x20\x47\x6C\x61\x73\x73",
	"\x4C\x49\x54\x20\x46\x6C\x61\x73\x68\x6C\x69\x67\x68\x74",
	"\x46\x6C\x61\x73\x68\x6C\x69\x67\x68\x74",
	"\x43\x61\x73\x73\x65\x74\x74\x65\x20\x52\x65\x63\x6F\x72\x64\x65\x72",
	"\x47\x6C\x6F\x77\x69\x6E\x67\x20\x50\x6F\x72\x74\x61\x6C",
	"\x52\x6F\x70\x65",
	"\x54\x6F\x72\x6E\x20\x53\x61\x69\x6C",
	"\x50\x6F\x75\x63\x68",
	"\x47\x6C\x61\x73\x73\x20\x50\x72\x69\x73\x6D",
	"\x43\x68\x65\x73\x74",
	"\x53\x61\x6C\x74\x20\x42\x65\x65\x66",
	"\x53\x65\x61\x20\x42\x69\x73\x63\x75\x69\x74\x73",
	"\x4E\x65\x65\x64\x6C\x65\x20\x26\x20\x54\x68\x72\x65\x61\x64",
	"\x53\x68\x69\x70\x27\x73\x20\x4C\x6F\x67",
	"\x42\x72\x6F\x6E\x74\x6F\x73\x61\x75\x72\x75\x73",
	"\x4F\x6C\x64\x20\x42\x6F\x61\x74",
	"\x53\x68\x6F\x76\x65\x6C",
	"\x52\x6F\x63\x6B",
	"\x53\x70\x65\x61\x72",
	"\x4C\x65\x76\x65\x72",
	"\x4F\x70\x65\x6E\x20\x44\x6F\x6F\x72",
	"\x53\x61\x76\x61\x67\x65\x20\x44\x6F\x67",
	"\x44\x65\x61\x64\x20\x44\x6F\x67",
	"\x44\x61\x72\x6B\x20\x4F\x70\x65\x6E\x69\x6E\x67",
	"\x44\x6F\x63\x74\x6F\x72\x20\x50\x6F\x74\x74\x65\x72",
	"\x47\x6C\x6F\x76\x65\x73\x20\x28\x77\x6F\x72\x6E\x29",
	"\x53\x74\x72\x61\x6E\x67\x65\x20\x4D\x61\x63\x68\x69\x6E\x65",
	"\x33\x20\x45\x6D\x70\x74\x79\x20\x53\x6F\x63\x6B\x65\x74\x73",
	"\x32\x20\x45\x6D\x70\x74\x79\x20\x53\x6F\x63\x6B\x65\x74\x73",
	"\x45\x6D\x70\x74\x79\x20\x53\x6F\x63\x6B\x65\x74",
	"\x32\x20\x42\x75\x74\x74\x6F\x6E\x73",
	"\x42\x65\x6C\x6C",
	"\x48\x61\x6D\x6D\x65\x72",
	"\x43\x61\x75\x73\x65\x77\x61\x79",
	"\x52\x6F\x62\x6F\x74\x20\x47\x75\x61\x72\x64",
	"\x48\x75\x67\x65\x20\x53\x74\x61\x74\x75\x65",
	"\x44\x6F\x6F\x72",
	"\x47\x6C\x61\x73\x73\x20\x50\x72\x69\x73\x6D",
	"\x47\x6C\x61\x73\x73\x20\x50\x72\x69\x73\x6D",
	"\x52\x6F\x62\x6F\x74\x20\x47\x75\x61\x72\x64\x20\x28\x64\x65\x66\x75\x6E\x63\x74\x29",
	"\x50\x72\x6F\x6A\x65\x63\x74\x69\x6E\x67\x20\x53\x74\x6F\x6E\x65",
	"\x44\x6F\x6F\x72",
	"\x4F\x70\x65\x6E\x20\x44\x6F\x6F\x72",
	"\x4F\x70\x65\x6E\x20\x43\x68\x65\x73\x74",
	"\x4F\x70\x65\x6E\x20\x44\x6F\x6F\x72",
	"\x4D\x65\x74\x61\x6C\x20\x50\x6C\x61\x74\x65",
	"\x4F\x70\x65\x6E\x20\x53\x68\x61\x66\x74",
	"\x50\x6F\x6C\x69\x63\x65\x20\x42\x6F\x78",
	"\x4F\x70\x65\x6E\x20\x44\x6F\x6F\x72",
	"\x53\x65\x61\x77\x6F\x72\x74\x68\x79\x20\x42\x6F\x61\x74",
	"\x44\x6F\x67\x20\x28\x65\x61\x74\x69\x6E\x67\x29",
	"\x47\x65\x6E\x65\x72\x61\x74\x6F\x72",
	"\x41\x72\x63\x68\x77\x61\x79",
	"\x42\x72\x6F\x6B\x65\x6E\x20\x47\x65\x6E\x65\x72\x61\x74\x6F\x72",
	"\x44\x65\x61\x64\x20\x46\x6C\x61\x73\x68\x6C\x69\x67\x68\x74",
};
const char *msgptr[] = {
	"",
	"\x49\x74\x27\x73\x20\x4C\x6F\x63\x6B\x65\x64\x21",
	"\x42\x72\x6F\x6E\x74\x6F\x73\x61\x75\x72\x75\x73",
	"\x49\x27\x76\x65\x20\x6E\x6F\x20\x4B\x65\x79\x21",
	"\x49\x74\x20\x6E\x65\x65\x64\x73\x20\x46\x69\x78\x69\x6E\x67\x21",
	"\x59\x6F\x75\x27\x72\x65\x20\x4A\x6F\x6B\x69\x6E\x67\x21",
	"\x46\x72\x61\x6D\x65\x20\x69\x73\x20\x52\x6F\x74\x74\x65\x6E\x2E\x2E\x57\x6F\x6E\x27\x74\x20\x62\x75\x64\x67\x65\x21",
	"\x4D\x69\x73\x73\x69\x6E\x67\x20\x50\x72\x69\x73\x6D\x73\x20\x6D\x75\x73\x74\x20\x62\x65\x20\x72\x65\x73\x70\x6F\x6E\x73\x69\x62\x6C\x65\x21",
	"\x49\x74\x27\x73\x20\x4F\x70\x65\x6E\x21",
	"\x4E\x6F\x74\x68\x69\x6E\x67",
	"\x57\x4F\x57\x21\x20\x57\x68\x61\x74\x20\x61\x20\x53\x68\x6F\x77\x2E\x2E\x57\x68\x65\x72\x65\x20\x61\x72\x65\x20\x77\x65\x3F",
	"\x55\x73\x65\x20\x32\x20\x77\x6F\x72\x64\x73\x2E\x20\x69\x2E\x65\x2E\x20\x50\x52\x45\x53\x53\x20\x52\x45\x56",
	"\x44\x69\x6E\x67\x21\x20\x44\x6F\x6E\x67\x21",
	"\x49\x20\x68\x65\x61\x72\x20\x61\x20\x47\x72\x69\x6E\x64\x69\x6E\x67\x20\x4E\x6F\x69\x73\x65\x21",
	"\x49\x27\x76\x65\x20\x6E\x6F\x74\x68\x69\x6E\x67\x20\x74\x6F\x20\x4A\x61\x6D\x20\x69\x74\x20\x77\x69\x74\x68\x21",
	"\x50\x72\x69\x73\x6D\x20\x73\x6C\x6F\x74\x73\x20\x69\x6E\x20\x74\x68\x65\x6E\x20\x76\x61\x6E\x69\x73\x68\x65\x73\x21",
	"\x49\x74\x20\x73\x61\x79\x73\x3A\x2D\x20",
	"\x49\x20\x73\x65\x65",
	"\x4B\x69\x6C\x6C\x65\x64\x20\x69\x74\x21",
	"\x49\x74\x27\x73\x20\x61\x6C\x72\x65\x61\x64\x79\x20\x44\x65\x61\x64\x21",
	"\x55\x67\x68\x21",
	"\x54\x69\x6D\x65\x20\x70\x61\x73\x73\x65\x73\x2E\x2E\x2E",
	"\x49\x27\x76\x65\x20\x6E\x6F\x20\x77\x65\x61\x70\x6F\x6E\x21",
	"\x73\x6F\x6D\x65\x74\x68\x69\x6E\x67",
	"\x49\x20\x6E\x65\x65\x64\x20\x73\x6F\x6D\x65\x74\x68\x69\x6E\x67\x20\x68\x65\x61\x76\x79\x21",
	"\x49\x20\x63\x75\x74\x20\x6D\x79\x73\x65\x6C\x66\x20\x61\x6E\x64\x20\x62\x6C\x65\x64\x20\x74\x6F\x20\x64\x65\x61\x74\x68\x21",
	"\x42\x41\x4E\x47\x21",
	"\x49\x74\x27\x73\x20\x53\x68\x69\x70\x73\x68\x61\x70\x65\x20\x6E\x6F\x77\x21",
	"\x4D\x79\x20\x72\x65\x70\x61\x69\x72\x20\x6B\x69\x74\x20\x69\x73\x20\x69\x6E\x63\x6F\x6D\x70\x6C\x65\x74\x65\x21",
	"\x44\x65\x6C\x69\x63\x69\x6F\x75\x73\x2E\x2E\x2E\x54\x68\x61\x6E\x6B\x73\x21",
	"\x48\x65\x27\x73\x20\x6E\x6F\x74\x20\x68\x75\x6E\x67\x72\x79\x2E\x2E\x48\x65\x27\x73\x20\x44\x65\x61\x64\x21",
	"\x49\x27\x76\x65\x20\x6E\x6F\x20\x46\x6F\x6F\x64\x21",
	"\x70\x6F\x75\x6E\x63\x65\x73\x20\x6F\x6E\x20\x66\x6F\x6F\x64\x21",
	"\x69\x73\x20\x56\x65\x67\x65\x74\x61\x72\x69\x61\x6E",
	"\x6D\x6F\x76\x65\x73\x20\x6F\x66\x66\x20\x65\x61\x74\x69\x6E\x67\x20\x42\x69\x73\x63\x75\x69\x74\x73\x21",
	"\x48\x65\x20\x77\x69\x6C\x6C\x20\x62\x65\x20\x4F\x2E\x4B\x2E",
	"\x54\x68\x65\x72\x65\x27\x73\x20\x61\x20\x43\x61\x73\x73\x65\x74\x74\x65\x20\x69\x6E\x20\x69\x74",
	"\x4D\x61\x79\x62\x65\x20\x49\x20\x73\x68\x6F\x75\x6C\x64\x20\x70\x6C\x61\x79\x20\x69\x74\x3F",
	"\x49\x74\x20\x68\x61\x73\x20\x6E\x6F\x20\x6D\x65\x61\x6E\x73\x20\x6F\x66\x20\x50\x72\x6F\x70\x75\x6C\x73\x69\x6F\x6E\x21",
	"\x52\x6F\x62\x6F\x74\x20\x47\x75\x61\x72\x64",
	"\x6E\x6F\x74\x68\x69\x6E\x67\x20\x73\x70\x65\x63\x69\x61\x6C",
	"\x49\x74\x20\x6C\x6F\x6F\x6B\x73\x20\x43\x6C\x69\x6D\x62\x61\x62\x6C\x65",
	"\x4D\x79\x20\x48\x61\x6E\x64\x20\x64\x69\x73\x61\x70\x70\x65\x61\x72\x73\x20\x69\x6E\x74\x6F\x20\x74\x68\x65\x20\x41\x75\x72\x61\x21",
	"\x49\x74\x27\x73\x20\x6C\x6F\x6F\x73\x65",
	"\x45\x78\x61\x6D\x69\x6E\x65\x20\x74\x68\x69\x6E\x67\x73\x20\x61\x6E\x64\x20\x74\x68\x69\x6E\x6B\x21",
	"\x73\x6F\x72\x72\x79",
	"\x49\x74\x20\x6C\x6F\x6F\x6B\x73\x20\x48\x75\x6E\x67\x72\x79\x21",
	"\x53\x6F\x6D\x65\x74\x68\x69\x6E\x67\x20\x68\x61\x70\x70\x65\x6E\x65\x64\x21",
	"\x49\x74\x27\x73\x20\x74\x6F\x6F\x20\x48\x6F\x74\x21",
	"\x53\x77\x69\x6D\x6D\x69\x6E\x67\x20\x64\x72\x61\x67\x73\x20\x6D\x65\x20\x64\x65\x65\x70\x65\x72\x21",
	"\x49\x27\x64\x20\x6E\x65\x65\x64\x20\x61\x6E\x20\x49\x72\x6F\x6E\x20\x62\x61\x72\x20\x66\x6F\x72\x20\x74\x68\x61\x74\x21",
	"\x44\x6F\x67",
	"\x57\x6F\x6E\x27\x74\x20\x6C\x65\x74\x20\x6D\x65\x21",
	"\x41\x41\x52\x52\x47\x47\x48\x48\x21\x21",
	"\x49\x27\x6D\x20\x64\x72\x6F\x77\x6E\x65\x64\x20\x69\x6E\x20\x51\x75\x69\x63\x6B\x73\x61\x6E\x64\x21",
	"\x57\x65\x6C\x63\x6F\x6D\x65\x20\x74\x6F\x20\x54\x48\x45\x20\x54\x49\x4D\x45\x20\x4D\x41\x43\x48\x49\x4E\x45",
	"\x46\x6F\x72\x20\x4C\x49\x5A\x20\x26\x20\x4D\x49\x43\x48\x41\x45\x4C\x20\x6D\x79\x20\x57\x69\x66\x65\x20\x26\x20\x53\x6F\x6E",
	"\x4F\x6E\x65\x20\x69\x73\x20\x6D\x61\x72\x6B\x65\x64\x20\x3C\x46\x4F\x52\x3E\x20\x6F\x6E\x65\x20\x3C\x52\x45\x56\x3E",
	"\x49\x74\x27\x73\x20\x61\x6C\x72\x65\x61\x64\x79\x20\x62\x72\x6F\x6B\x65\x6E\x21",
	"\x4F\x2E\x4B\x2E",
	"\x53\x6F\x6D\x65\x74\x68\x69\x6E\x67\x20\x66\x65\x6C\x6C\x20\x6F\x75\x74\x21",
	"\x50\x48\x45\x57\x21\x20\x42\x65\x74\x74\x65\x72\x20\x77\x61\x74\x63\x68\x20\x6D\x79\x20\x73\x74\x65\x70\x21",
	"\x42\x52\x49\x4C\x4C\x49\x41\x4E\x54\x21\x20\x59\x6F\x75\x20\x72\x65\x73\x63\x75\x65\x64\x20\x74\x68\x65\x20\x44\x6F\x63\x74\x6F\x72\x21",
	"\x43\x4F\x4E\x47\x52\x41\x54\x55\x4C\x41\x54\x49\x4F\x4E\x53\x20\x48\x45\x52\x4F\x21",
	"\x4F\x6F\x70\x73\x21\x20\x57\x65\x27\x72\x65\x20\x72\x75\x73\x68\x69\x6E\x67\x20\x68\x65\x61\x64\x6C\x6F\x6E\x67",
	"\x74\x68\x72\x6F\x75\x67\x68\x20\x54\x69\x6D\x65\x20\x69\x74\x73\x65\x6C\x66\x21",
	"\x49\x20\x68\x65\x61\x72\x20\x61\x20\x73\x6E\x61\x72\x6C\x69\x6E\x67\x20\x6E\x6F\x69\x73\x65\x20\x62\x65\x6C\x6F\x77\x21",
	"\x57\x61\x6C\x6C\x20\x63\x6C\x6F\x73\x65\x64\x20\x62\x65\x68\x69\x6E\x64\x20\x6D\x65\x21",
	"\x46\x69\x6E\x64\x20\x74\x68\x65\x20\x33\x20\x50\x72\x69\x73\x6D\x73\x20\x74\x68\x61\x74\x20\x63\x6F\x6E\x74\x72\x6F\x6C",
	"\x6D\x79\x20\x4D\x61\x63\x68\x69\x6E\x65\x2E\x20\x52\x65\x73\x63\x75\x65\x20\x6D\x65\x21",
	"\x49\x27\x6D\x20\x77\x65\x61\x72\x69\x6E\x67\x20\x74\x68\x65\x6D\x21",
	"\x47\x6F\x20\x77\x61\x73\x68\x20\x79\x6F\x75\x72\x20\x6D\x6F\x75\x74\x68\x20\x6F\x75\x74\x21",
	"\x48\x61\x70\x70\x65\x6E\x73",
	"\x4D\x41\x2E\x59\x20\x2E\x45\x4C\x2E\x53\x54\x45\x20\x20\x2E\x4F\x56\x20\x31\x38\x2E\x31",
};


const uint8_t status[] = {
	175, 
	9, 1, 0, 3, 0, 1, 
	81, 58, 105, 73, 
	203, 
	0, 0, 0, 3, 
	79, 81, 86, 106, 
	165, 
	4, 18, 
	56, 64, 
	165, 
	4, 2, 
	57, 64, 
	172, 
	4, 18, 9, 2, 0, 28, 
	59, 
	166, 
	18, 32, 
	112, 113, 63, 
	178, 
	7, 32, 0, 1, 0, 4, 0, 1, 
	81, 79, 81, 
	170, 
	4, 32, 0, 1, 
	81, 77, 73, 
	198, 
	19, 0, 
	103, 104, 61, 
	196, 
	0, 1, 
	81, 
	179, 
	4, 10, 8, 7, 0, 6, 0, 10, 
	54, 64, 54, 73, 
	203, 
	0, 6, 0, 10, 
	64, 54, 64, 54, 
	192, 
	64, 
	198, 
	0, 10, 
	54, 64, 10, 
	150, 25, 
	4, 10, 8, 7, 9, 10, 0, 4, 0, 7, 
	81, 60, 73, 
	210, 
	0, 1, 0, 12, 0, 1, 0, 4, 
	79, 62, 81, 
	150, 30, 
	4, 10, 8, 7, 9, 10, 0, 4, 0, 7, 
	81, 60, 73, 
	210, 
	0, 2, 0, 12, 0, 2, 0, 4, 
	79, 62, 81, 
	150, 35, 
	4, 10, 8, 7, 9, 10, 0, 4, 0, 7, 
	81, 60, 73, 
	210, 
	0, 3, 0, 12, 0, 3, 0, 4, 
	79, 62, 81, 
	150, 15, 
	4, 10, 8, 7, 9, 10, 0, 4, 0, 7, 
	81, 60, 73, 
	210, 
	0, 6, 0, 12, 0, 6, 0, 4, 
	79, 62, 81, 
	182, 
	4, 10, 8, 7, 9, 10, 0, 4, 0, 7, 
	81, 60, 73, 
	201, 
	0, 4, 0, 4, 
	79, 81, 
	178, 
	4, 4, 0, 4, 0, 4, 0, 4, 
	81, 79, 81, 
	181, 
	1, 45, 4, 20, 14, 29, 14, 58, 14, 30, 
	116, 73, 
	209, 
	0, 29, 0, 21, 0, 31, 0, 21, 
	62, 62, 
	164, 
	4, 44, 
	63, 
	180, 
	14, 35, 14, 36, 14, 37, 9, 10, 0, 10, 
	58, 
	165, 
	0, 3, 
	81, 73, 
	204, 
	19, 3, 13, 37, 0, 37, 
	59, 
	208, 
	19, 2, 13, 36, 0, 36, 0, 37, 
	72, 
	208, 
	19, 1, 13, 35, 0, 35, 0, 36, 
	72, 
	196, 
	0, 3, 
	81, 
	172, 
	8, 16, 14, 62, 0, 62, 
	53, 
	176, 
	7, 17, 18, 28, 0, 28, 0, 17, 
	62, 
	176, 
	4, 17, 8, 6, 5, 28, 0, 28, 
	53, 
};
const uint8_t actions[] = {
	10, 18, 19, 
	4, 10, 0, 4, 
	109, 81, 73, 
	211, 
	15, 1, 0, 1, 0, 1, 0, 12, 
	79, 54, 53, 64, 
	206, 
	19, 2, 0, 2, 0, 12, 
	54, 53, 64, 
	206, 
	19, 3, 0, 3, 0, 12, 
	54, 53, 64, 
	201, 
	19, 4, 0, 4, 
	54, 64, 
	206, 
	19, 5, 0, 5, 0, 12, 
	54, 53, 64, 
	211, 
	16, 5, 0, 6, 0, 6, 0, 12, 
	79, 54, 53, 64, 
	202, 
	0, 7, 0, 4, 
	60, 81, 64, 
	9, 1, 19, 
	4, 4, 0, 10, 
	54, 109, 
	10, 1, 19, 
	2, 12, 0, 10, 
	109, 54, 64, 
	10, 1, 11, 
	4, 39, 0, 36, 
	109, 54, 64, 
	8, 10, 9, 
	3, 1, 0, 1, 
	52, 
	13, 34, 9, 
	1, 1, 0, 1, 0, 33, 
	109, 72, 
	9, 18, 9, 
	1, 1, 0, 1, 
	53, 109, 
	4, 18, 9, 
	1, 33, 
	120, 
	13, 36, 9, 
	1, 33, 0, 33, 0, 1, 
	72, 109, 
	8, 39, 11, 
	4, 36, 8, 3, 
	108, 
	15, 39, 11, 
	4, 36, 9, 3, 6, 33, 
	109, 103, 25, 61, 
	23, 39, 11, 
	4, 36, 9, 3, 1, 33, 0, 8, 0, 3, 
	109, 53, 58, 64, 
	14, 1, 11, 
	4, 36, 8, 3, 0, 39, 
	109, 54, 64, 
	4, 63, 43, 
	4, 10, 
	11, 
	14, 7, 13, 
	2, 2, 14, 5, 0, 5, 
	109, 53, 110, 
	12, 5, 15, 
	4, 39, 2, 3, 6, 5, 
	3, 
	21, 5, 15, 
	4, 39, 2, 3, 1, 5, 0, 3, 0, 4, 
	109, 72, 
	23, 7, 15, 
	4, 39, 2, 4, 14, 6, 0, 6, 0, 7, 
	17, 23, 53, 53, 
	15, 63, 45, 
	4, 10, 9, 10, 0, 7, 
	109, 58, 114, 115, 
	15, 63, 44, 
	4, 10, 9, 10, 0, 7, 
	109, 58, 114, 115, 
	21, 5, 7, 
	4, 37, 2, 49, 1, 5, 0, 49, 0, 50, 
	72, 109, 
	12, 5, 7, 
	4, 37, 2, 49, 6, 5, 
	3, 
	10, 1, 7, 
	2, 50, 0, 4, 
	109, 54, 64, 
	10, 68, 10, 
	4, 32, 0, 43, 
	54, 64, 111, 
	4, 42, 0, 
	4, 32, 
	49, 
	6, 7, 50, 
	3, 11, 
	17, 36, 37, 
	5, 43, 8, 
	4, 34, 
	12, 12, 
	8, 5, 11, 
	4, 36, 14, 8, 
	6, 
	8, 10, 77, 
	3, 16, 0, 16, 
	52, 
	8, 10, 77, 
	3, 45, 0, 45, 
	52, 
	8, 10, 77, 
	3, 46, 0, 46, 
	52, 
	9, 18, 77, 
	1, 16, 0, 16, 
	53, 109, 
	9, 18, 77, 
	1, 45, 0, 45, 
	53, 109, 
	9, 18, 77, 
	1, 46, 0, 46, 
	53, 109, 
	23, 71, 77, 
	1, 16, 4, 10, 0, 3, 0, 16, 0, 38, 
	81, 62, 109, 73, 
	203, 
	0, 1, 0, 3, 
	88, 82, 81, 15, 
	23, 71, 77, 
	4, 10, 1, 45, 0, 3, 0, 45, 0, 38, 
	109, 81, 62, 73, 
	203, 
	0, 1, 0, 3, 
	82, 81, 88, 15, 
	23, 71, 77, 
	4, 10, 1, 46, 0, 3, 0, 46, 0, 38, 
	109, 81, 62, 73, 
	203, 
	0, 1, 0, 3, 
	88, 82, 81, 15, 
	15, 60, 63, 
	3, 18, 0, 18, 0, 38, 
	62, 109, 29, 64, 
	15, 60, 65, 
	3, 19, 0, 19, 0, 38, 
	62, 109, 29, 64, 
	4, 7, 19, 
	2, 12, 
	42, 
	10, 26, 31, 
	4, 24, 0, 29, 
	109, 54, 64, 
	15, 7, 71, 
	3, 15, 14, 46, 0, 46, 
	53, 109, 110, 64, 
	5, 7, 43, 
	4, 10, 
	109, 107, 
	5, 7, 68, 
	3, 21, 
	16, 123, 
	23, 63, 45, 
	4, 10, 8, 10, 0, 4, 0, 1, 0, 4, 
	81, 82, 81, 10, 
	19, 63, 44, 
	4, 10, 8, 10, 0, 4, 0, 4, 
	81, 77, 81, 10, 
	8, 5, 7, 
	4, 28, 2, 56, 
	8, 
	13, 5, 7, 
	4, 28, 2, 44, 6, 7, 
	45, 50, 
	21, 5, 7, 
	4, 28, 2, 44, 1, 7, 0, 44, 0, 56, 
	109, 72, 
	10, 1, 7, 
	2, 56, 0, 26, 
	109, 54, 64, 
	7, 61, 50, 
	3, 11, 
	109, 16, 118, 119, 
	14, 22, 48, 
	1, 10, 0, 10, 0, 9, 
	109, 72, 64, 
	14, 24, 48, 
	1, 9, 0, 9, 0, 10, 
	109, 72, 64, 
	23, 49, 52, 
	2, 22, 1, 19, 0, 22, 0, 19, 0, 38, 
	59, 62, 2, 34, 
	10, 49, 52, 
	2, 22, 6, 19, 
	45, 2, 33, 
	4, 7, 52, 
	2, 22, 
	46, 
	10, 1, 39, 
	4, 13, 2, 22, 
	45, 2, 102, 
	14, 1, 39, 
	4, 13, 14, 22, 0, 14, 
	109, 54, 64, 
	8, 1, 53, 
	4, 14, 2, 23, 
	4, 
	4, 7, 53, 
	2, 23, 
	38, 
	19, 1, 53, 
	2, 57, 4, 14, 0, 15, 0, 57, 
	109, 54, 53, 64, 
	15, 1, 53, 
	4, 15, 0, 14, 0, 57, 
	109, 54, 53, 64, 
	23, 50, 53, 
	2, 23, 3, 13, 3, 14, 3, 20, 0, 13, 
	59, 109, 27, 73, 
	210, 
	0, 23, 0, 57, 0, 14, 0, 20, 
	72, 59, 59, 
	5, 50, 53, 
	2, 23, 
	45, 28, 
	19, 47, 0, 
	4, 15, 1, 24, 14, 16, 0, 16, 
	109, 17, 23, 53, 
	9, 47, 0, 
	4, 15, 1, 24, 
	17, 9, 
	5, 7, 80, 
	4, 2, 
	17, 43, 
	10, 63, 80, 
	4, 2, 0, 31, 
	109, 47, 53, 
	19, 1, 81, 
	4, 2, 2, 31, 0, 18, 0, 31, 
	109, 54, 59, 117, 
	14, 56, 59, 
	4, 19, 0, 28, 0, 17, 
	62, 47, 13, 
	18, 53, 59, 
	4, 19, 1, 25, 0, 2, 0, 25, 
	58, 53, 109, 
	9, 53, 59, 
	4, 19, 6, 25, 
	45, 14, 
	14, 1, 7, 
	4, 17, 2, 28, 0, 21, 
	109, 54, 64, 
	4, 7, 29, 
	2, 43, 
	41, 
	10, 26, 29, 
	2, 43, 0, 20, 
	109, 54, 64, 
	10, 1, 81, 
	4, 21, 2, 29, 
	45, 51, 102, 
	14, 1, 81, 
	4, 21, 2, 31, 0, 22, 
	109, 54, 64, 
	23, 49, 60, 
	2, 29, 1, 18, 0, 18, 0, 29, 0, 58, 
	59, 72, 51, 32, 
	23, 49, 60, 
	2, 29, 1, 19, 0, 19, 0, 29, 0, 58, 
	59, 72, 51, 32, 
	9, 49, 60, 
	6, 18, 6, 19, 
	45, 31, 
	4, 49, 60, 
	2, 30, 
	30, 
	4, 7, 60, 
	2, 29, 
	46, 
	18, 31, 60, 
	2, 29, 1, 6, 0, 29, 0, 30, 
	72, 26, 18, 
	22, 31, 60, 
	2, 29, 1, 26, 0, 26, 0, 29, 0, 30, 
	53, 72, 18, 
	18, 58, 60, 
	2, 29, 1, 6, 0, 29, 0, 30, 
	26, 72, 18, 
	13, 31, 60, 
	2, 29, 6, 6, 6, 26, 
	45, 22, 
	4, 31, 60, 
	2, 30, 
	19, 
	9, 5, 69, 
	3, 17, 6, 7, 
	45, 50, 
	23, 5, 69, 
	3, 17, 1, 7, 0, 17, 0, 51, 0, 40, 
	72, 53, 17, 23, 
	22, 79, 74, 
	4, 5, 2, 53, 1, 7, 0, 53, 0, 54, 
	72, 109, 64, 
	8, 66, 0, 
	4, 6, 9, 10, 
	7, 
	10, 1, 42, 
	2, 54, 0, 41, 
	54, 109, 64, 
	8, 39, 35, 
	2, 59, 6, 40, 
	24, 
	19, 39, 35, 
	2, 59, 1, 40, 0, 59, 0, 61, 
	72, 109, 47, 73, 
	200, 
	0, 42, 0, 47, 
	72, 
	6, 1, 41, 
	2, 42, 
	45, 39, 102, 
	10, 1, 41, 
	2, 47, 0, 42, 
	109, 54, 64, 
	4, 7, 55, 
	2, 42, 
	5, 
	4, 7, 46, 
	3, 32, 
	35, 
	4, 58, 0, 
	1, 6, 
	26, 
	4, 1, 38, 
	4, 13, 
	48, 
	0, 66, 0, 
	44, 
	0, 38, 0, 
	66, 
	0, 10, 83, 
	66, 
	0, 57, 0, 
	71, 
	0, 44, 0, 
	63, 
	1, 7, 0, 
	17, 40, 
	0, 1, 0, 
	45, 
	0, 74, 0, 
	121, 
	0, 31, 0, 
	45, 
	0, 60, 0, 
	20, 
	3, 17, 0, 
	109, 85, 9, 122, 
	2, 84, 0, 
	21, 88, 88, 
	255,
};


const uint8_t verbs[] = {
65, 85, 84, 79,
71, 79, 32, 32,
197, 78, 84, 69,
210, 85, 78, 32,
215, 65, 76, 75,
79, 80, 69, 78,
213, 78, 76, 79,
76, 79, 79, 75,
197, 88, 65, 77,
211, 69, 65, 82,
71, 69, 84, 32,
212, 65, 75, 69,
208, 73, 67, 75,
84, 72, 82, 79,
211, 76, 73, 78,
195, 72, 85, 67,
200, 85, 82, 76,
83, 65, 89, 32,
68, 82, 79, 80,
208, 85, 84, 32,
199, 73, 86, 69,
204, 69, 65, 86,
76, 73, 71, 72,
201, 71, 78, 73,
85, 78, 76, 73,
196, 79, 85, 83,
67, 76, 73, 77,
193, 83, 67, 69,
82, 69, 65, 68,
77, 79, 86, 69,
76, 79, 65, 68,
75, 73, 76, 76,
205, 85, 82, 68,
211, 76, 65, 89,
87, 69, 65, 82,
196, 79, 78, 32,
82, 69, 77, 79,
196, 79, 70, 70,
73, 78, 86, 69,
66, 82, 69, 65,
211, 77, 65, 83,
196, 69, 83, 84,
83, 87, 73, 77,
82, 73, 78, 71,
81, 85, 73, 84,
197, 78, 68, 32,
83, 65, 73, 76,
68, 73, 71, 32,
211, 72, 79, 86,
70, 69, 69, 68,
77, 69, 78, 68,
198, 73, 88, 32,
210, 69, 80, 65,
74, 65, 77, 32,
215, 69, 68, 71,
84, 79, 85, 67,
80, 85, 76, 76,
83, 65, 86, 69,
83, 72, 79, 79,
198, 73, 82, 69,
69, 65, 84, 32,
80, 76, 65, 89,
211, 84, 65, 82,
80, 82, 69, 83,
208, 85, 83, 72,
202, 65, 66, 32,
72, 69, 76, 80,
83, 67, 79, 82,
71, 82, 65, 66,
70, 79, 82, 32,
82, 69, 86, 32,
70, 73, 84, 32,
201, 78, 83, 69,
208, 76, 85, 71,
70, 85, 67, 75,
194, 79, 76, 76,
194, 65, 83, 84,
194, 65, 76, 76,
211, 72, 73, 84,
76, 69, 86, 69,
198, 79, 82, 67,
208, 82, 73, 83,
202, 69, 77, 77,
195, 82, 79, 87,
87, 65, 73, 84,
211, 84, 65, 76,
32, 32, 32, 32,
32, 32, 32, 32,
	0,
};
const uint8_t nouns[] = {
65, 78, 89, 32,
78, 79, 82, 84,
83, 79, 85, 84,
69, 65, 83, 84,
87, 69, 83, 84,
85, 80, 32, 32,
68, 79, 87, 78,
68, 79, 79, 82,
66, 69, 76, 76,
71, 76, 79, 86,
66, 85, 83, 72,
87, 73, 78, 68,
71, 76, 65, 83,
80, 65, 73, 78,
75, 69, 89, 32,
68, 82, 65, 87,
80, 73, 83, 84,
67, 82, 79, 87,
194, 65, 82, 32,
77, 65, 67, 72,
208, 79, 82, 84,
80, 79, 76, 73,
72, 79, 85, 83,
83, 84, 85, 68,
67, 69, 76, 76,
83, 80, 72, 73,
66, 79, 88, 32,
87, 65, 76, 76,
87, 69, 65, 80,
83, 84, 65, 84,
68, 69, 67, 75,
82, 73, 71, 71,
67, 65, 66, 73,
76, 79, 67, 75,
80, 76, 65, 73,
71, 69, 78, 69,
67, 79, 82, 82,
83, 87, 65, 77,
76, 65, 75, 69,
67, 65, 85, 83,
73, 83, 76, 65,
65, 82, 67, 72,
83, 72, 65, 70,
66, 85, 84, 84,
82, 69, 86, 32,
70, 79, 82, 32,
68, 79, 67, 84,
208, 79, 84, 84,
70, 76, 65, 83,
204, 65, 77, 80,
67, 65, 83, 83,
212, 65, 80, 69,
66, 82, 79, 78,
66, 79, 65, 84,
83, 72, 79, 86,
82, 79, 66, 79,
199, 85, 65, 82,
82, 79, 67, 75,
83, 80, 69, 65,
76, 69, 86, 69,
68, 79, 71, 32,
82, 79, 80, 69,
83, 65, 73, 76,
66, 69, 69, 70,
211, 65, 76, 84,
66, 73, 83, 67,
78, 69, 69, 68,
212, 72, 82, 69,
76, 79, 71, 32,
67, 72, 69, 83,
72, 65, 77, 77,
80, 79, 85, 67,
204, 69, 65, 84,
72, 79, 76, 69,
77, 69, 84, 65,
208, 76, 65, 84,
70, 73, 82, 83,
80, 82, 73, 83,
79, 70, 70, 32,
217, 79, 85, 32,
83, 84, 79, 78,
79, 80, 69, 78,
71, 65, 77, 69,
73, 78, 86, 69,
84, 85, 78, 78,
77, 79, 79, 82,
83, 79, 67, 75,
83, 72, 65, 70,
	0,
};
const uint8_t automap[] = {
75, 69, 89, 32,
	5,
80, 73, 83, 84,
	6,
67, 82, 79, 87,
	7,
71, 76, 65, 83,
	8,
70, 76, 65, 83,
	9,
70, 76, 65, 83,
	10,
67, 65, 83, 83,
	11,
82, 79, 80, 69,
	13,
83, 65, 73, 76,
	14,
80, 79, 85, 67,
	15,
67, 72, 69, 83,
	17,
66, 69, 69, 70,
	18,
66, 73, 83, 67,
	19,
78, 69, 69, 68,
	20,
76, 79, 71, 32,
	21,
83, 72, 79, 86,
	24,
82, 79, 67, 75,
	25,
83, 80, 69, 65,
	26,
76, 69, 86, 69,
	27,
68, 79, 67, 84,
	32,
72, 65, 77, 77,
	40,
70, 76, 65, 83,
	62,
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
