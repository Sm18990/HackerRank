#!bin/bash

read c

if [ $c == "N" ] || [ $c == "n" ] ;  then 
	echo "NO"
else
	echo "YES"
fi

unset c
