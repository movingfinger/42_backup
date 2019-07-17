#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int		len = 0;
	int		*r;
	int		n1 = start;
	int		n2 = end;
	
	len = n1 > n2 ? n1 - n2 + 1 : n2 - n1 + 1;
	r = (int *)malloc(sizeof(int) * len);
	while (--len >= 0)
		if (n1 > n2)
			r[len] = start--;
		else
			r[len] = start++;
	return (r);
}
