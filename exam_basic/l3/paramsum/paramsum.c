#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(21474);
		ft_putnbr(83648);
	}
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		main(int ac, char **av)
{
	int		i = 0;
	
	if (ac > 1)
	{
		if (av)
		i = ac - 1;
	}
	else
		i = 0;
	ft_putnbr(i);
	write(1, "\n", 1);
}
