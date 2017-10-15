/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task10
*/

int	my_str_isalpha(char const *str)
{
	int	i = 0;

	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0') {
		if ((str[i] >= 'a' && str[i] <= 'z') ||
		    (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
