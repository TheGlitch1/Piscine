#!/bin/bash
if [ -p /dev/stdin ]
then
cat /dev/stdin | sed -n '1~2p'
else
echo "No input file"
fi
