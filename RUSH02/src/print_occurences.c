/*
** EPITECH PROJECT, 2017
** CPool_rush2_2017
** File description:
** What language is this
*/

#include	"libmy.h"
#include	"my.h"

void	print_nb_occurences(char **av, int j, int occurences)
{
	my_putstr(av[j]);
	my_putchar(':');
	my_put_nbr(occurences);
	my_putchar(' ');
}

void	print_percent(int occurences, char **av)
{
	float	integer = occurences;
	int	nb_letters = only_alpha(av);
	float	decimal = 0;
	
	integer /= nb_letters;
	integer *= 100;
	my_putchar('(');
	my_put_nbr(integer);
	my_putchar('.');
	decimal = (integer - (int)integer) * 100;
	my_put_nbr(decimal);
	if (decimal < 10)
	  my_put_nbr(0);
	my_putchar('%');
	my_putchar(')');
}
