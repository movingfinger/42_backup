#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", ft_atoi(av[1]));
	printf("\n");
	return (0);
}
