int my_is_prime(int nb)
{
	int i;

	i = 0;
	if ((nb % 2 == 0 && nb != 2) || nb <= 1)
		return (0);
		i = 3;
	while (i * i <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}
