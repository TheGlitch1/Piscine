int		my_compute_factorial_rec(int nb)
{
	int i;
	int result;

	i = nb;
	if (result <= 1)
		result = 1;
	if (i == 0 || i == 1)
		return (1);
	result = i * my_compute_factorial_rec(i - 1);
	return (result);
}
