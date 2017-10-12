/*
** concat_params.c for CPool_Day08_2017 in /home/flupine/CPool_Day08_2017
 ** 
 ** Made by Faurest Lupine
 ** Login   <faurest.lupine@epitech.eu>
 ** 
 ** Started on  mer. oct. 11 13:53:07 2017 Faurest Lupine
** Last update jeu. oct. 12 15:11:36 2017 Faurest Lupine
 */

#include "libmy.h"

char	*concat_params(int argc, char **argv)
{
	int i;
	int size;
	char *memoire;

	i  = 0;
	size = 0;
	while (i < argc)
	{
		size = size + my_strlen(argv[i]);
		i++;
	}
	memoire = malloc(size * sizeof(char));

	if(memoire == NULL)
		return("Erreur");

	i = 0;
	while(i < argc)
	{
		my_strcat(memoire, argv[i]);
		if(i < argc && my_strlen(argv[i]) > 0)
			my_strcat(memoire, "\n");
		i++;
	}
	return (memoire);
}
