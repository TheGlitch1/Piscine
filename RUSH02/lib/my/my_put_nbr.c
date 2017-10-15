/*
** EPITECH PROJECT, 2017
** CPool_Day07_2017
** File description:
** task01
*/

#include	"libmy.h"

int	my_put_nbr(int nb)
{
	int	mod = 0;
	int	res = 0;

	if (nb < 0) {
		my_putchar('-');
		nb *= -1;
	} if (nb >= 0) {
		if (nb >= 10) {
			mod = nb % 10;
			res = (nb - mod) / 10;
			my_put_nbr(res);
			my_putchar(mod + '0');
		} else {
			my_putchar(nb % 10 + '0');
		}
	}
	return (0);
}
