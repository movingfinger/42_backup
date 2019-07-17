/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 09:19:41 by sako              #+#    #+#             */
/*   Updated: 2019/03/28 23:05:56 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	print_result(char *digit_first, char *digit_second)
{
	ft_putchar(digit_first[0]);
	ft_putchar(digit_first[1]);
	ft_putchar(' ');
	ft_putchar(digit_second[0]);
	ft_putchar(digit_second[1]);
	ft_putchar(',');
	ft_putchar(' ');
	digit_second[1]++;
	if (digit_second[1] > '9')
	{
		digit_second[1] = '0';
		digit_second[0]++;
	}
}

void	do_first_loop(int i, int j, char *digit_first, char *digit_second)
{
	int total_while_number;
	
	total_while_number = 100;
	while (i < 100)
	{
		j = total_while_number - 1 - i;
		digit_second[1] = digit_first[1] + 1;
		digit_second[0] = digit_first[0];
		if (digit_second[1] > '9')
		{
			digit_second[1] = '0';
			digit_second[0] = digit_first[0] + 1;
		}
		while (j > 0)
		{
			print_result(digit_first, digit_second);
			j--;
		}
		digit_first[1]++;
		if (digit_first[1] > '9')
		{
			digit_first[1] = '0';
			digit_first[0]++;
		}
		i++;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	char digit_first[2];
	char digit_second[2];

	i = 0;
	j = 0;
	digit_first[0] = '0';
	digit_first[1] = '0';
	digit_second[0] = '0';
	digit_second[1] = '0';
	do_first_loop(i, j, digit_first, digit_second);
}
