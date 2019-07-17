#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int		size;
	int		*arr;

	size = 0;
	size = start > end ? start - end + 1 : end - start + 1;
	arr = (int *)malloc(sizeof(int) * size);
	for(int i = 0; i < size; i++)
	{
		if (start > end)
			arr[i] = start--;
		else
			arr[i] = start++;
	}
	return (arr);
}
