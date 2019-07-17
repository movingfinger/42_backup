#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr);

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\n", ft_itoa(atoi(av[1])));
	return (0);
}
