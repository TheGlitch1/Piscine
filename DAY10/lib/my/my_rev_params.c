void	my_putchar(char c);

int		my_rev_params(int argc, char *argv[])
{
	while ((argc - 1) > 0)
	{
		my_putstr(argv[argc]);
		my_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	my_rev_params(argc, argv);
	return (0);
}
