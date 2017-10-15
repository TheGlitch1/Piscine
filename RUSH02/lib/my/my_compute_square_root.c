/*
** EPITECH PROJECT, 2017
** CPool_Day05_2017
** File description:
** square root
*/

int	my_compute_square_root(int nb)
{
	int	stock = nb;

	if (nb < 0)
		return (0);
	while (stock > 0) {
		if (stock * stock == nb)
			return (stock);
		else
			stock--;
	}
	return (stock);
}
