//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "music-show", 0,	11},
	{"", "mail-show", 0, 8},
	{"", "wifi-show", 0, 10},
	{"   ", "date '+%b %d,%a'", 3600, 0},
	{"   ", "date '+%I:%M %p'", 60, 9},
	{"  ", "battery-show", 60, 9},
	{"", "volume-show", 0, 12},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
