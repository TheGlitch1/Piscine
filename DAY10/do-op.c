/*
** do-op.c for CPool_Day10_2017 in /home/flupine/CPool_Day10_2017
** 
** Made by Faurest Lupine
** Login   <faurest.lupine@epitech.eu>
** 
** Started on  ven. oct. 13 12:39:51 2017 Faurest Lupine
** Last update ven. oct. 13 13:04:43 2017 Faurest Lupine
*/
#include <stdio.h>
#include "include/my.h"

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_div(int a, int b)
{
	return (a / b);
}

int		ft_fact(int a, int b)
{
	return (a * b);
}

int		ft_sous(int a, int b)
{
	return (a - b);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc - 1 <= 0)
	{
		return (0);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2] == "-")
		printf("%d", ft_sous(a, b));
	if (argv[2] == "+")
		printf("%d", ft_add(a, b));
	if (argv[2] == "*")
		printf("%d", ft_fact(a, b));
	if (argv[2] == "/")
		printf("%d", ft_div(a, b));
	return (0);
}
