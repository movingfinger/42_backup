#include <stdio.h>
#include <string.h>

char 	**ft_split(char *str);

int		main(int ac, char **av)
{
	char 	**res;
	if (ac == 2)
	{
		res = ft_split(av[1]);
		for (unsigned long i = 0; i < sizeof(res); i++)
			printf("%s\n", res[i]);
	}
	return (0);
}g
