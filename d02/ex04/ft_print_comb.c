/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 20:29:41 by sako              #+#    #+#             */
/*   Updated: 2019/03/28 21:31:48 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	int digit[3];

	digit[0] = '0';
	while (digit[0] <= '7')
	{
		digit[1] = '0';
		while (digit[1] <= '8')
		{
			digit[2] = '0';
			while (digit[2] <= '9')
			{
				if (digit[0] < digit[1] && digit[1] < digit[2])
				{
					ft_putchar(digit[0]);
					ft_putchar(digit[1]);
					ft_putchar(digit[2]);
					ft_putchar(',');
					ft_putchar(' ');
				}
				digit[2]++;
			}
			digit[1]++;
		}
		digit[0]++;
	}
}
