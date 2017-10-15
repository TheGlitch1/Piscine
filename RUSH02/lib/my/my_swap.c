/*
** EPITECH PROJECT, 2017
** CPool_Day04_2017
** File description:
** swap
*/

void	my_swap(int *a, int *b)
{
	int	stock = 0;

	stock = *a;
	*a = *b;
	*b = stock;
}
