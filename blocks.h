//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	//{"^b#CF5E4B^^c#031417^  ^b#eb7d6a^", "date '+%d %b %Y - %H:%M'",					5,		0},
	//{"a", "date '+%b %d (%a) %I:%M%p'",					5,		0},
	//{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"", "gzz_ethernet.sh",	30,		0},
	{"", "gzz_volume.sh",	30,		1},
	{"", "gzz_memory.sh",	30,		0},
    {"", "gzz_time.sh", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "";
static unsigned int delimLen = 0;
