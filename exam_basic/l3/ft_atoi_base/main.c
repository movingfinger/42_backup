#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base);

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_atoi_base(av[1], atoi(av[2])));
	printf("\n");
}
