/*
** EPITECH PROJECT, 2017
** CPool_rush2_2017
** File description:
** What language is this ?
*/

#include	"libmy.h"
#include	"my.h"

int	check_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return(0);
	else if (c >= 'A' && c <= 'Z')
		return (0);
	return (1);
}

int	count_occurences(char **av, int i, int j)
{
	char	cmp = av[j][0];
	char	is_maj = cmp + 32;
	char	is_min = cmp - 32;
	int	occurences = 0;

	if (av[1][i] == cmp && check_alpha(av[1][i] == 0))
		occurences++;
	else if ((av[1][i] == is_maj || av[1][i] == is_min)
		 && check_alpha(av[1][i]) == 0)
		occurences++;
	return (occurences);
}

void	print_occurences(char **av, int j, int occurences)
{
	if (av[j][0] < '0' || av[j][0] > '9') {
		print_nb_occurences(av, j, occurences);
		print_percent(occurences, av);
		my_putchar('\n');
	}
}

void	step_one(char **av, int ac)
{
	int	i = 0;
	int	j = 2;
	int	occurences = 0;

	while (j < ac) {
		while (av[1][i] != '\0') {
			occurences += count_occurences(av, i, j);
			i++;
		}
		print_occurences(av, j, occurences);
		i = 0;
		occurences = 0;
		j++;
	}
}
