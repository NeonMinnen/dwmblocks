//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"CPU:" , "~/.local/bin/cpu",                       10,      0} ,
	{"GPU:" , "~/.local/bin/gpu",                       10,      0} ,
    {"" , "~/.local/bin/volume1",                       0,     10} ,
	{"Home:" , "~/.local/bin/homespace",                180,     0} ,
	{"Root:" , "~/.local/bin/rootspace",                180,     0} ,
	{"Updates:" , "~/.local/bin/pacman",                300,    0} ,
	{"", "date '+%b %d (%a) %I:%M%p'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
