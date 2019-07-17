/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:14:11 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 14:27:18 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		ft_atoi(char *str)
{
	int		i;
	int		num;
	int		neg;

	i = 0;
	num = 0;
	neg = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				write(1, "-", 1);
				neg *= -1;
			}
			i++;
		}
		if (str[i] < 33)
			i++;
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		if (str[i] >= 48 && str[i] <= 57)
			num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_atoi(argv[1]));
	}
	ft_putchar('\n');
	return (0);
}
