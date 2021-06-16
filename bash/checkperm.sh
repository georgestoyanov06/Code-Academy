#! /bin/bash

read FILENAME

if [ ! -e "$FILENAME" ] 
then
	echo "The file does not exist"
fi

ls -l "$FILENAME"

if [ -r "$FILENAME" ]
then
	echo "$FILENAME is readable"
fi

if [ -w "$FILENAME" ]
then
	echo "$FILENAME is writebale"
fi

if [ -x "$FILENAME" ]
then
	echo "$FILENAME is executable"
fi