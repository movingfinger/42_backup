#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int		i;

	i = 2;
	if (n <= 2)
		printf("%d", n);
	while (n > 1)
	{
		while (n % i == 0)
		{
			n /= i;
			printf("%d", i);
			if (n != 1)
				printf("*");
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int		n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		fprime(n);
	}
	printf("\n");
	return (0);
}
