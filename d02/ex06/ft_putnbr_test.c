/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 11:24:02 by sako              #+#    #+#             */
/*   Updated: 2019/03/28 22:16:29 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		find_length_number(int nb)
{
	int check_quotient;
	int quotient;

	check_quotient = 0;
	quotient = nb / 10;
	while (quotient > 0)
	{
		quotient = quotient / 10;
		check_quotient++;
	}
	return (check_quotient);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_number(int check_quotient, int nb)
{
	int temp_nb;
	int check_loop;
	int quotient;
	int remainder;
	char char_int;

	while (check_quotient > 0)
	{
		temp_nb = nb;
		check_loop = check_quotient;
		while (check_loop > 0)
		{
			temp_nb = temp_nb / 10;
			quotient = temp_nb;
			check_loop--;
		}
		quotient = temp_nb % 10;
		char_int = quotient + '0';
		ft_putchar(char_int);
		check_quotient--;
	}
	remainder = nb % 10;
	char_int = remainder + '0';
	ft_putchar(char_int);
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	int check_quotient;

	quotient = 0;
	remainder = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	check_quotient = find_length_number(nb);
	print_number(check_quotient, nb);
}

int		main(void)
{
	ft_putnbr(4);
	ft_putnbr(-4);
	ft_putnbr(42);
	ft_putnbr(-42);
	ft_putnbr(144);
	ft_putnbr(-144);
	ft_putnbr(1244);
	ft_putnbr(-1244);
	return (0);
}
