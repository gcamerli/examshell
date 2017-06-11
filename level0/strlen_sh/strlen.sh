#!/bin/sh
# zsh strlen.sh
string=(echo $FT_LINE)

if [ "$string" ]; then
	echo -n $FT_LINE | wc -m 
fi
