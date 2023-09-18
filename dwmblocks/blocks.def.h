//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"^c#fabd2f^ ",	"internet.sh",									5,		0},

	{"^c#689d6a^󰔟 ",	"uptime.sh",									60,		0},

	{"^c#fb4934^ ",	"sb-cpu",										5,		0},

	{"^c#03a598^ ",	"cpu-usage",									2,		0},

	{"^c#458588^󰮯 ",	"check-arch-updates.sh",						300,	0},

	{"^c#50fa7b^󰃟 ",	"brightness",									120,	0},

	{"^c#d79921^󰕾 ",	"volume.sh",									0,		0},

	{"^c#8ec07c^",	"sb-battery",									1,		0},

	{"^c#b16286^󰃭 ",	"date '+%b %d (%a) %I:%M%p '",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
