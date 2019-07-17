#include <stdlib.h>

int		ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

char	*ft_itoa_base(int value, int base)
{
	char 	*s;
	int		size = 0;
	char 	*tab;
	int		flag = 0;
	int		tmp;
	tab = "0123456789ABCDEF";
	if (base < 2 || base > 16)
		return (0);
	if (value < 0 && base == 10)
		flag = 1;
	tmp = value;
	while (tmp /= base)
		size++;
	size = size + flag + 1;
	s = (char *)malloc(sizeof(char) * (size + 1));
	s[size] = '\0';
	if (flag == 1)
		s[0] = '-';
	while (size > flag)
	{
		s[size - 1] = tab[ft_abs(value % base)];
		size--;
		value /= base;
	}
	return (s);
}
