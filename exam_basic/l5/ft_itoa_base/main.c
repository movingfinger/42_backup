#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa_base(int value, int base);

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_itoa_base(atoi(av[1]), atoi(av[2])));
	return (0);
}
