#!/bin/bash
cat passwd | sed -n 'n;p' | cut -d':' -f1 | rev | sort -r | awk 'NR >= ENVIRON["MY_LINE1"] && NR <= ENVIRON["MY_LINE2"]' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./'
