/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task05
*/

int	my_strcmp(char const *s1, char const *s2)
{
	int	i = 0;

	while (s1[i] != '\0') {
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i] && i == 0)
			return (-1);
		else
			return (1);
	}
	return (0);
}
