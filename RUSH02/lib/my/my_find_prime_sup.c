/*
** EPITECH PROJECT, 2017
** CPool_Day05_2017
** File description:
** find prime sup
*/

int	check_prime(int nb)
{
	int	i = nb - 1;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i > 1) {
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	my_find_prime_sup(int nb)
{
	int	i = nb;

	while (check_prime(i) == 0)
		i++;
	return (i);
}
