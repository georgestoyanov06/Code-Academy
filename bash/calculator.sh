#! /bin/bash

FIRST=$1
SECOND=$2

ADD=$(($1+$2))
echo "$1 + $2 = $ADD"

DIFF=$(($1-$2))
echo "$1 - $2 = $DIFF"

REZ=$(($1/$2))
echo "$1 / $2 = $REZ"

MULT=$(($1*$2))
echo "$1 * $2 = $MULT"