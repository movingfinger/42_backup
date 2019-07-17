#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n +'0');
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		is_prime(int n)
{
	int		i = 2;
	
	if (n < 2)
		return (0);
	while (n > i)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

void	add_prime_sum(int n)
{
	int		i = 2;
	int		res = 0;

	while (n >= i)
	{
		if (is_prime(i))
			res += i;
		i++;
	}
	ft_putnbr(res);
}

int		ft_atoi(char *s)
{
	int		n = 0;
	int		neg = 1;

	while (*s == ' ' || (*s >= '\t' && *s <= '\n'))
		s++;
	if (*s == '-')
		neg = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return (n * neg);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		add_prime_sum(ft_atoi(av[1]));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
