//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"CPU:" , "~/.local/bin/cpu",                       5,    0} ,
	{"GPU:" , "~/.local/bin/gpu",                       5,    0} ,
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
    {"" , "~/.local/bin/volume",                        5,      0} ,
	{"Home:" , "~/.local/bin/homespace",                5,      0} ,
	{"Root:" , "~/.local/bin/rootspace",                5,      0} ,
	{"Updates:" , "~/.local/bin/pacman",                        300,    0} ,

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
