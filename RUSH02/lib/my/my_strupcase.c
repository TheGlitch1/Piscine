/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task07
*/

char	*my_strupcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
