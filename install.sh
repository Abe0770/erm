#!/bin/bash
# erm version v1.00

trap 'printf "\n";stop' 2

printf "erm Ver 1.00 \n\n"

if [ "$EUID" -ne 0 ]
    then 
    	echo "Permission denied! Please run me as root"
    	exit
    else
	FILE=erm
	if [ -f "$FILE" ]
	then
	    printf "Running install script..."
     	    chmod +x erm
	    sudo cp erm /usr/local/bin/erm
	    printf "\nSuccessfully installed erm\n"
	else
	    printf "\nError: File erm not found!\n Make sure all the files are included and run the script in erm directory\n"
	fi
fi
