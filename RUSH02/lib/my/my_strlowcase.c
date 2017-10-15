/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task08
*/

char	*my_strlowcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
