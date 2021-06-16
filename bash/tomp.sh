#! /bin/bash

for var in "$@"
do
    touch /home/$var
    echo "$var"
done