#!/bin/bash
# erm version v1.00

trap 'printf "\n";stop' 2

printf "erm Ver 1.00 \n\n"

if [ "$EUID" -ne 0 ]
    then 
    	echo "Permission denied! Please run me as root"
    	exit
    else
	FILE=/usr/local/bin/erm
	if [ -f "$FILE" ]
	then
	    printf "Running uninstall script..."
	    sudo rm /usr/local/bin/erm
	    printf "\nerm has been uninstalled successfully\n"
	else
	    printf "\nError: failed to locate erm files\n"
	fi
fi
