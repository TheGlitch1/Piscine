/*
** EPITECH PROJECT, 2017
** CPool_Day07_2017
** File description:
** task02
*/

#include	<stdio.h>

int	my_dest_len(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*check_param(char *dest, char const *src)
{
	if (src == NULL && dest != NULL)
		return (dest);
	else if (src != NULL && dest == NULL)
		return ((char *)src);
	return (NULL);
}

char	*my_strcat(char *dest, char const *src)
{
	int	i = 0;
	int	j = my_dest_len(dest);

	if (src == NULL || dest == NULL)
		return (check_param(dest, src));
	while (src[i] != '\0') {
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
