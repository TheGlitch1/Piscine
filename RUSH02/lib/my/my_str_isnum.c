/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task11
*/

int	my_str_isnum(char const *str)
{
	int	i = 0;

	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
