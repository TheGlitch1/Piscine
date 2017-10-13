#include <stdio.h>

int		my_compute_factorial_it(int nb)
{
	int i;
	int result;

	i = nb;
	result = 1;
	if (nb == 0 || nb == 1)
		return (1);

	while (i > 1)
	{
		result = result * i;
		i--;
	}
	return (result);
}
