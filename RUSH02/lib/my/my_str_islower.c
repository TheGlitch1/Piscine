/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task12
*/

int	my_str_islower(char const *str)
{
	int	i = 0;

	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
