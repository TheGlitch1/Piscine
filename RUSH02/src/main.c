/*
** EPITECH PROJECT, 2017
** CPool_rush2_2017
** File description:
** What language is this ?
*/

#include	"libmy.h"
#include	"my.h"
#include	<stdlib.h>

int	only_alpha(char **av)
{
	int	i = 0;
	int	nb_letters = 0;

	while (av[1][i] != '\0') {
		if (check_alpha(av[1][i]) == 0)
			nb_letters++;
		i++;
	}
	return (nb_letters);
}

int	check_nb(int ac, char **av)
{
	int	i = 2;

	while (i < ac) {
		if (av[i][0] >= '0' && av[i][0] <= '9')
			return (84);
		else
			i++;
	}
	return (0);
}

int	check_arg(int ac, char **av)
{
	int	i = 2;

	while (i < ac) {
		if (my_strlen(av[i]) == 1)
			i++;
		else
			return (84);
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 3 || check_arg(ac, av) != 0
	    || check_nb(ac, av) != 0)
		return (84);
	step_one(av, ac);
	return (0);
}
