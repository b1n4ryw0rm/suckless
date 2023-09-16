static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     "^c#458588^ %2s ",        "pacicon" },
	{ run_command,       "^c#ebdbb2^  %s ",         "check-arch-updates.sh" },
	{ run_command,       "^c#ebdbb2^  %s |",         "check-aur-updates.sh" },

	{ run_command,     "^c#fabd2f^ %2s |",        "internet.sh" },

	{ run_command,     "^c#b8bb26^ %2s ",        "brightnessicon" },	
	{ run_command,     "^c#ebdbb2^ %2s%% |",        "brightness" },

	{ run_command,     "^c#d3869b^ %2s ",        "upicon" },
	{ uptime,          "^c#ebdbb2^ %s |",         NULL    }, 
	
	{ run_command,     "^c#03a598^ %2s ",        "cpuicon" },
	{ cpu_perc,	       "^c#ebdbb2^ %s%% |",    NULL   },

	{ run_command,     "^c#fb4934^ %2s ",        "tempicon" },
	{ run_command,     "^c#ebdbb2^ %2s |",       "sb-cpu" }, 
	
	{ run_command,     "^c#689d6a^ %2s ",        "ramicon" },
	{ ram_perc,        "^c#ebdbb2^ %s%% |",        NULL           },

	{ run_command,     "^c#d79921^ %s ",        "volumeicon" },
	{ run_command,     "^c#ebdbb2^ %s |",     "volume.sh" },  
	
	{ run_command,     "^c#8ec07c^ %s ",        "batteryicon" },
	// { run_command,     "^c#ebdbb2^ %s%% |",        "battery.sh" },
	{ battery_perc,    "^c#ebdbb2^ %s%% ",       "BAT1" },
	{ battery_state,   "^c#ebdbb2^ (%s) |",        "BAT1" },

	{ run_command,     "^c#b16286^ %2s ",        "timeicon" },
	{ datetime,        "^c#ebdbb2^ %s",         "%a %b %d - %I:%M%p" },
};
