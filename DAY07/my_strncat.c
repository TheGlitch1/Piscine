int		my_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char	*my_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	j;

	i = 0;
	j = my_strlen(dest);
	while (i < nb)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
