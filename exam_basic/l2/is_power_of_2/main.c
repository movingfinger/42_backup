#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n);

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%d - %d\n", atoi(av[1]), is_power_of_2(atoi(av[1])));
	return (0);
}
