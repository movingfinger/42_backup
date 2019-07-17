void	inter(char *s1, char *s2)
{
	int	i = 0;
	int j = 0;
	int	check[136] = {0};

	while (s2[i])
	{
		if (check[(int)s2[i]] == 0)
			check[(int)s2[i]] = 1;
		i++;
	}
	while (s1[j])
	{
		if (check[(int)s1[j]] == 1)
		{
			check[(int)s1[j]] = 0;
			write(1, &s1[j], 1);
		}
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}