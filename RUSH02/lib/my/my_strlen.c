/*
** EPITECH PROJECT, 2017
** CPool_Day04_2017
** File description:
** strlen
*/

int	my_strlen(char const *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
