/*
** my_isneg.c for CPool_Day03_2017 in /home/flupine/CPool_Day03_2017
**
** Made by Faurest LUPINE
** Login   <faurest.lupine@epitech.eu>
**
** Started on  Wed Oct 04 09:01:01 2017 Faurest LUPINE
** Last update Wed Oct 04 09:54:59 2017 Faurest LUPINE
*/

#include <unistd.h>

void	my_putchar(char c);

int		my_isneg(int n)
{
	if (n < 0)
		my_putchar('N');
	else
		my_putchar('P');
	return (0);
}
