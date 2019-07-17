#include <stdio.h>
#include <stdlib.h>

void	print_bits(unsigned char octet);

int		main(int ac, char **av)
{
	if (ac == 2)
		print_bits(atoi(av[1]));
	return (0);
}
