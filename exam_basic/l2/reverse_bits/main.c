#include <stdio.h>
#include <stdlib.h>

unsigned char	reverse_bits(unsigned char octet);

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", reverse_bits(atoi(av[1])));
	return (0);
}
