#include <stdlib.h>

#define ABS(x) ((x > 0) ? (x) : (-x))

char	*ft_itoa_base(int value, int base)
{
	char	tab[16] = "0123456789ABCDEF";
	char	*s;
	int		temp = 0;
	int		flag = 0;
	int		size = 0;

	if (base < 2 || base > 16)
		return (NULL);
	if (value < 0 && base == 10)
		flag = 1;
	if (value == 0)
		return ("0");
	if (value == -2147483648 && base == 10)
		return ("-2147483648");
	temp = value;
	while (value)
	{
		size++;
		value /= base;
	}
	size = size + flag;
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (flag)
		s[0] = '-';
	s[size] = '\0';
	while (size-- && temp)
	{
		s[size] = tab[ABS(temp) % base];
		temp /= base;
	}
	return (s);
}
