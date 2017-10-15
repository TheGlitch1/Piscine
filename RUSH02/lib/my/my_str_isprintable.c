/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task14
*/

int	my_str_isprintable(char const *str)
{
	int	i = 0;

	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0') {
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
