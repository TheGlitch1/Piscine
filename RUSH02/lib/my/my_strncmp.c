/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task06
*/

int	my_strncmp(char const *s1, char const *s2, int n)
{
	int	i = 0;

	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i] && i == 0)
			return (-1);
		else
			return (1);
	}
	return (0);
}
