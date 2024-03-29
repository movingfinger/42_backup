/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:33:20 by sako              #+#    #+#             */
/*   Updated: 2019/04/09 22:08:09 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-", 1);
		write(1, "21474", 5);
		write(1, "83648", 5);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n * (-1));
	}
	if (n >= 0 && n < 10)
	
		c = n + '0';
		write(1, &c, 1);
	}
	if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
