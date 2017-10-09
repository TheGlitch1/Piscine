#!/bin/bash
if [ ! -z $1 ]
then
cat /dev/stdin | cut -d';' -f3 | grep -i $1 | wc -l
elif [ -p /dev/stdin ]
then
cat /dev/stdin | cut -d';' -f3 | wc -l
else
echo "No input file"
fi
