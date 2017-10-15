/*
** EPITECH PROJECT, 2017
** CPool_Day06_2017
** File description:
** task02
*/

int	cpy_strlen(char const *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*my_strncpy(char *dest, char const *src, int n)
{
	int	i = 0;
	int	len = cpy_strlen(src);

	while (i < n) {
		dest[i] = src[i];
		i++;
	}
	if (n > len)
		dest[i] = '\0';
	return (dest);
}
