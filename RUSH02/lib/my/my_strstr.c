/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task04
*/

#include	<stdio.h>	

int	len_strstr(char const *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*my_strstr(char const *str, char const *to_find)
{
	int	i = 0;
	int	j = 0;
	int	len = len_strstr(to_find);

	while (str[i] != '\0') {
		if (to_find[j] == str[i]) {
			j++;
			if (j == len - 2)
				return ((char *)str + i);
		}
		i++;
		if (to_find[j] != str[i])
			j = 0;
	}
	return (NULL);
}
