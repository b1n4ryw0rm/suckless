static const struct arg args[] = {
	/* function format          argument */

	{ run_command,     "%s ",        "mpdicon.sh" },
	{ run_command,     "%s |",        "mpd.sh" }, 

	{ run_command,     "%s ",        "mailicon.sh" },
	{ run_command,     "%s |",        "newmail.sh" },

	{ run_command,     "%2s ",        "upicon.sh" },
	{ uptime,          "%s |",         NULL           }, 
	
	{ run_command,     "%2s ",        "cpuicon.sh" },
	{ cpu_perc,	       "%s%% |",         NULL           },
	
	{ run_command,     "%2s ",        "ramicon.sh" },
	{ ram_perc,        "%s%% |",        NULL           },
	
	{ run_command,     "%2s ",        "diskicon.sh" },
	{ disk_perc,       "%s%% |",         "/"            },
	
	{ run_command,     "%2s ",        "tempicon.sh" },
	{ run_command,     "%2s |",     "tail -1 ~/.config/.temp" }, 

	{ run_command,     "%2s ",        "weathericon.sh" },
	{ run_command,     "%2s |",     "tail -1 ~/.config/weather" }, 
	
	{ run_command,     "%s ",        "pacmanicon.sh" },
	{ run_command,     "%2s |",     "tail -1 ~/.config/updates" },
	

	{ run_command,     "%s ",        "volumeicon.sh" },
	{ run_command,     "%s |",     "volume.sh" }, 
        
	{ run_command,     "%2s ",        "timeicon.sh" },
	{ datetime,        "%s",         "%a %b %d - %I:%M%p" },
};
