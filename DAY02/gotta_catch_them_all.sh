#!/bin/bash
if [ ! -z $1 ]
then
cat /dev/stdin | cut -d':' -f5 | cut -d' ' -f2 |grep "^$1" | wc -l
elif [ -p /dev/stdin ]
then
cat /dev/stdin | cut -d':' -f5 | cut -d' ' -f2 | wc -l
else
echo "No file input"
fi
