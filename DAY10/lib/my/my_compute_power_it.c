int	my_compute_power_it(int nb, int p)
{
	int i;

	i = 1;

	while(p--)
		i *= nb;
	return (i);
}
