#include <stdio.h>
#include <stdlib.h>

int		pgcd(int n1, int n2)
{	
	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}
	return (n1);
}

int		main(int ac, char **av)
{
	int		c;

	if (ac == 3)
	{
		c = pgcd(atoi(av[1]), atoi(av[2]));
		printf("%d", c);
	}
	printf("\n");
	return (0);
}
