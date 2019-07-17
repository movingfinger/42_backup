#include <stdio.h>

int		max(int* tab, unsigned int len);

int		main(int ac, char **av)
{
	int		tab[5] = {0, 421, 29, -12, 32};
	int		size = 5;

	(void)ac;
	(void )av;
	printf("%d\n", max(tab, size));
	return (0);
}
