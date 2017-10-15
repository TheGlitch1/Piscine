/*
** EPITECH PROJECT, 2017
** CPool_Day04_2017
** File description:
** getnbr
*/

int	my_getnbr(char const *str)
{
	int	res = 0;
	int	i = 0;
	int	neg = 1;

	while (str[i] < '0' || str[i] > '9') {
		if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
		if ((res >= 214748364 && str[i] > '7'))
			return (0);
		res = res * 10 + str[i] - 48;
		i++;
	}
	res *= neg;
	return (res);
}
