/*
** EPITECH PROJECT, 2017
** CPool_Day05_2017
** File description:
** is prime
*/

int	my_is_prime(int nb)
{
	int	i = nb - 1;

	if (nb == 0 || nb == 1)
		return (0);
	while (i > 1) {
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}
