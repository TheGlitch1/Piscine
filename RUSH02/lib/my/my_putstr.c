/*
** EPITECH PROJECT, 2017
** CPool_Day04_2017
** File description:
** putstr
*/

#include	"libmy.h"

int	my_putstr(char const *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
