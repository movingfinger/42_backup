#include <stdlib.h>

int		check_length(int n)
{
	int		length;

	length = 0;
	if (n < 0)
	{
		n *= -1;
		length++;
	}
	while (n > 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char    *ft_itoa(int nbr)
{
	char	*s;
	int		length;
	int		i;
	
	i = 0;
	length = check_length(nbr);
	i = length;
	s = (char *)malloc(sizeof(char) * (length + 1));
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
	}
	while (nbr >= 0)
	{
		s[--length] = nbr % 10 + '0';
		nbr /= 10;
	}
	s[i] = '\0';
	return (s);
}
