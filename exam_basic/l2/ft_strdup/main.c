#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *src);

int		main(int ac, char **av)
{
	char 	*temp;

	if (ac == 2)
	{
		temp = ft_strdup(av[1]);
		printf("%s - %s, %d", av[1], temp, strcmp(av[1], temp));
	}
	printf("\n");
	return (0);
}
