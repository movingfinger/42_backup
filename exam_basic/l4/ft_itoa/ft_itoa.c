#include <stdlib.h>

int		get_size(int n)
{
	int		size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char	*s;
	int		size = get_size(nbr);

	if (nbr == -2147483648)
		return ("-2147483648");
	else if (nbr == 0)
		return ("0");
	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s[size] = '\0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (size-- && nbr)
	{
		s[size] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (s);
}
