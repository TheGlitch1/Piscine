/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task03
*/

int	my_len(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*my_revstr(char *str)
{
	int	i = 0;
	char	stock;
	int	j = my_len(str) - 1;

	while (i < j) {
		stock = str[i];
		str[i] = str[j];
		str[j] = stock;
		i++;
		j--;
	}
	return (str);
}
