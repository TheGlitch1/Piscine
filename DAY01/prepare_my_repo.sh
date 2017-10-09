#!/bin/bash
blih -u faurest.lupine@epitech.eu repository create $1
blih -u faurest.lupine@epitech.eu repository setacl $1 ramassage-tek r
blih -u faurest.lupine@epitech.eu repository getacl $1
