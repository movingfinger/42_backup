#include "unistd.h"

int		main(int ac, char **av)
{
	char 	c;
	int		i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			c = av[1][i];
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				c -= 32;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				c += 32;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
