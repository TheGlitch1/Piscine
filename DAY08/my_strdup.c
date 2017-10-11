/*
** my_strdup.c for CPool_Day08_2017 in /home/flupine/CPool_Day08_2017
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  mer. oct. 11 10:01:22 2017 Faurest Lupine
** Last update mer. oct. 11 11:46:32 2017 Faurest Lupine
*/

#include <stdlib.h>
#include "libmy.h"

char	*my_strdup(char const *src)
{
	char		*memoire;
	memoire =	malloc((my_strlen(src) + 1)  * sizeof(char));
	if (memoire == NULL)
		exit(0);
	memoire = my_strcpy(memoire, src);
	memoire[my_strlen(src) + 1] = '\0';
	return(memoire);
}
