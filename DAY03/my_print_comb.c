/*
** my_print_comb.c for CPool_Day03_2017 in /home/flupine/CPool_Day03_2017
**
** Made by Faurest LUPINE
** Login   <faurest.lupine@epitech.eu>
**
** Started on  Wed Oct 04 09:01:01 2017 Faurest LUPINE
** Last update Wed Oct 04 09:54:59 2017 Faurest LUPINE
*/

#include <unistd.h>

void	my_putchar(char c);

int		ft_print(int a, int b, int c)
{
	if (a == 55 && b == 56 && c == 57)
	{
		my_putchar(a);
		my_putchar(b);
		my_putchar(c);
		return (0);
	}
	my_putchar(a);
	my_putchar(b);
	my_putchar(c);
	my_putchar(',');
	my_putchar(' ');
	return (0);
}

int		my_print_comb(void)
{
	int i;
	int b;
	int c;

	i = 48;
	b = 49;
	c = 50;
	while (i <= 55)
	{
		b = i + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_print(i, b, c);
				c++;
			}
			b++;
		}
		i++;
	}
	return (0);
}
