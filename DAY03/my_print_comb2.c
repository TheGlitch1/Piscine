/*
** my_print_comb2.c for CPool_Day03_2017 in /home/flupine/CPool_Day03_2017
**
** Made by Faurest LUPINE
** Login   <faurest.lupine@epitech.eu>
**
** Started on  Wed Oct 04 09:01:01 2017 Faurest LUPINE
** Last update Wed Oct 04 09:54:59 2017 Faurest LUPINE
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_comb2(void)
{
	int i;
	int i2;
	i = 0;
	i2 = 0;
	while (i2 < 100)
	{
		i = i2 + 1;
		while (i < 100)
		{
			my_putchar(i2 / 10 + 48);
			my_putchar(i2 % 10 + 48);
			my_putchar(' ');
			my_putchar(i / 10 + 48);
			my_putchar(i % 10 + 48);
			if ((i2 / 10 != 9) || (i2 % 10 != 8))
			{
				my_putchar(',');
				my_putchar(' ');
			}
			i++;
		}
		i2++;
	}
	return (0);
}
