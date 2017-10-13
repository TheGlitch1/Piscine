char	*my_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && 
			(str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
