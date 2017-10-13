/*
** my_put_nbr.c for CPool_Day03_2017 in /home/flupine/CPool_Day03_2017
**
** Made by Faurest LUPINE
** Login   <faurest.lupine@epitech.eu>
**
** Started on  Wed Oct 04 09:01:01 2017 Faurest LUPINE
** Last update Wed Oct 04 09:54:59 2017 Faurest LUPINE
*/

#include <unistd.h>

void	my_putchar(char c);

int		my_put_nbr(int nb)
{
	int chiffre;

	if (nb < 0)
	{
		my_putchar('-');
		nb = -nb;
	}
	if (nb <= 9)
		my_putchar(nb + 48);
	else
	{
		my_put_nbr(nb / 10);
		my_put_nbr(nb % 10);
	}
	return (0);
}
