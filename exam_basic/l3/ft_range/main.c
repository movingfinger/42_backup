#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end);

int		main(int ac, char **av)
{
	int		start = 0, end = 0, size = 0;
	int		*arr;

	if (ac == 3)
	{
		start = atoi(av[1]);
		end = atoi(av[2]);
		arr = ft_range(start, end);
		size = start > end ? start - end : end - start;
		for(int i = 0; i < size + 1; i++)
			printf("%d ", arr[i]);
	}
	printf("\n");
}
