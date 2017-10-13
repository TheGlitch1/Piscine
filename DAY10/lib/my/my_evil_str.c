void my_putchar(char c);

int size(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *my_evil_str(char *str)
{
	int i;

	i = size(str);
	while (i >= 0)
	{
		my_putchar(str[i]);
		i--;
	}
	return (0);
}
