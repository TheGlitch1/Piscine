/*
** EPITECH PROJECT, 2017
** CPool_Day07_2017
** File description:
** task03
*/

#include	<stdio.h>

int	my_dest_n_len(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*check_n_param(char *dest, char const *src)
{
	if (src == NULL && dest != NULL)
		return (dest);
	else if (src != NULL && dest == NULL)
		return ((char *)src);
	return (NULL);
}

char	*my_strncat(char *dest, char const *src, int nb)
{
	int	i = 0;
	int	j = my_dest_n_len(dest);

	if (src == NULL || dest == NULL)
		return (check_n_param(dest, src));
	while (i < nb) {
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
