int		my_strlen01(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*my_revstr(char *str)
{
	int i;
	int j;
	char swap;

	i = 0;
	j = my_strlen01(str) - 1;
	while (i < j)
	{
		swap = str[i];
		str[i] = str[j];
		str[j] = swap;
		i++;
		j++;
	}
	return (str);
}
