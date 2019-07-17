#include <stdio.h>
#include <stdlib.h>

 unsigned int    lcm(unsigned int a, unsigned int b);

 int		main(int ac, char **av)
{
	unsigned int	a, b;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		printf("%d - %d: %d\n", a, b, lcm(a, b));
	}
	return (0);
}
