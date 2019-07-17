#include <unistd.h>

char	hidenp(char *s, char *t)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] == t[j])
			j++;
		j++;
		if (t[j == '\0'])
			c = '1';
		i++;
	}
	c = '0';
	return (c);
}

int		main(int ac, char **av)
{
	char	c;

	if (ac == 3)
	{
		c = hidenp(av[2], av[1]);
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}
