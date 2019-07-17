void	union(char *s1, char *s2)
{
	int	i = 0;
	int j = 0;
	int	check[136] = {0};

	while (s1[i])
	{
		if (check[(int)s1[i]] == 0)
		{
			check[(int)s1[i]] = 1;
			write(1, &s1[i], 1);
		}
		i++;
	}
	while (s2[j])
	{
		if (check[(int)s2[j]] == 0)
		{
			check[(int)s2[j]] = 1;
			write(1, &s2[j], 1);
		}
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		union(av[1], av[2]);
	write(1, "\n", 1);
}