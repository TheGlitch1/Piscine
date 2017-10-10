void	my_putchar(char c);

void	my_aff_params(int argc, char *argv[])
{
	int i;


	i = 0;
	while (i < argc)
	{
		my_putchar(argv[argc][i]);
		my_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	my_aff_params(argc, argv);
	return (0);
}
