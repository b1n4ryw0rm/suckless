static const struct arg args[] = {
	/* function format          argument */
	/*
	{ run_command,     "^c#8be9fd^  %s ",        "mpdicon.sh" },
	{ run_command,     "^c#f8f8f2^  %s |",        "mpd.sh" }, 

	{ run_command,     "^c#50fa7b^ %s ",        "mailicon.sh" },
	{ run_command,     "^c#f8f8f2^ %s |",        "newmail.sh" },
	*/

	{ run_command,     "^c#8be9fd^ %2s |",        "internet.sh" },

	{ run_command,     "^c#50fa7b^ %s ",        "brightnessicon" },
	{ run_command,     "^c#f8f8f2^ %s |",        "brightness" },

	{ run_command,     "^c#ff79c6^ %2s ",        "upicon" },
	{ uptime,          "^c#f8f8f2^ %s |",         NULL           }, 
	
	{ run_command,     "^c#ffb86c^ %2s ",        "cpuicon" },
	{ cpu_perc,	       "^c#f8f8f2^ %s%% |",         NULL           },
	
	{ run_command,     "^c#f1fa8c^ %2s ",        "ramicon" },
	{ ram_perc,        "^c#f8f8f2^ %s%% |",        NULL           },
	/*
	{ run_command,     "^c#ff5555^ %2s ",        "diskicon.sh" },
	{ disk_perc,       "^c#f8f8f2^  %s%% |",         "/"            },
	
	{ run_command,     "^c#ff79c6^ %2s ",        "tempicon.sh" },
	{ run_command,     "^c#f8f8f2^ %2s |",     "tail -1 ~/.config/.temp" }, 

	{ run_command,     "^c#59fa7b^ %2s ",        "weathericon.sh" },
	{ run_command,     "^c#f8f8f2^ %2s |",     "tail -1 ~/.config/weather" }, 
	
	{ run_command,     "^c#bd93f9^ %s ",        "pacmanicon.sh" },
	{ run_command,     "^c#f8f8f2^ %2s |",     "tail -1 ~/.config/updates" },
	*/
	
	{ run_command,     "^c#8be9fd^ %s ",        "volumeicon" },
	{ run_command,     "^c#f8f8f2^ %s |",     "volume.sh" },

	{ run_command,     "^c#bd93f9^ %s ",        "batteryicon" },
	// { run_command,     "^c#f8f8f2^ %2s |",     "battery.sh" },
	{ battery_perc,    "^c#f8f8f2^ %s%% ",       "BAT1" },
	{ battery_state,   "^c#f8f8f2^ (%s) |",        "BAT1" },
        
	{ run_command,     "^c#f1fa8c^ %2s ",        "timeicon" },
	{ datetime,        "^c#f8f8f2^ %s",         "%a %b %d - %I:%M%p" },

	
};
