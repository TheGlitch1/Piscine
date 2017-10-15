/*
** EPITECH PROJECT, 2017
** CPool_Day07_2017
** File description:
** task01
*/

#include	"libmy.h"

int	my_isneg(int n)
{
	if (n < 0)
		my_putchar('N');
	else
		my_putchar('P');
	return (0);
}
