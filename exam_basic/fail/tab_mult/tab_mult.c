#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(21474);
		ft_putnbr(83648);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n  = -n;
	}
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		ft_atoi(char *s)
{
	int		num = 0;
	int		neg = 1;

	while (*s == ' ' || (*s >= '\t' && *s <= '\n'))
		s++;
	if (*s == '-')
		neg = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
		num = num * 10 + *s++ - '0';
	return (num * neg);
}

// should put 'x' instead of '*'

void	tab_mult(int n)
{
	for (int i = 1; i < 10; i++)
	{
		ft_putnbr(i);
		write (1, " * ", 3);
		ft_putnbr(n);
		write (1, " = ", 3);
		ft_putnbr(n * i);
		write(1, "\n", 1);
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi(av[1]));
	else
		write(1, "\n", 1);
	return (0);
}
