/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task09
*/

void	lowercase_char(char *str, int i)
{
	int	j = i;

	while (str[j] >= '0' && str[j] <= '9')
		j++;
	while ((str[j] >= 'A' && str[j] <= 'Z') ||
	       (str[j] >= 'a' && str[j] <= 'z')) {
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] += 32;
		j++;
	}
}

void	check_last_char(char *str, int i)
{
	if ((str[i - 1] >= 32 && str[i - 1] <= 47) || i == 0
	    || (str[i - 1] >= 58 && str[i - 1] <= 64) || (str[i - 1] >= 91
		    && str[i - 1] <= 96))
		str[i] -= 32;
}

char	*my_strcapitalize(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			check_last_char(str, i);
		else if (str[i] >= '0' && str[i] <= '9')
			lowercase_char(str, i);
		i++;
	}
	return (str);
}
