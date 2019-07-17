/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:00:43 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 19:46:12 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int		n;
	int		neg;
	int		i;

	i = 0;
	neg = 1;
	n = 0;
	while (str[i] > 32)
	{		
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				neg = -1;
			i++;
		}
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		if (str[i] >= '0' && str[i] <= '9')
			n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * neg);
}

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
		n *= -1;
		ft_putnbr(n);
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return ;
}

int		is_prime(int n)
{
	int		i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i < n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		n;
	int		prime;

	n = 0;
	prime = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n >= 0)
		{
			while (n > 1)
			{
				if(is_prime(n))
					prime += n;
				n--;
			}
		}
	}
	ft_putnbr(prime);
	ft_putchar('\n');
	return (0);
}
