/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File dRescription:
** task13
*/

int	my_str_isupper(char const *str)
{
	int	i = 0;

	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
