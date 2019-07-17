/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:05:49 by sako              #+#    #+#             */
/*   Updated: 2019/04/08 21:45:53 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		*ft_map(int *tab, int length, int(*f)(int));

int		inc_num(int n)
{
	return n + 5;
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(21474);
		ft_putnbr(83648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		main(void)
{
	int test1[] = {1,2,3,4,5};
	int* res = ft_map(test1, 5, inc_num);
	for (int i = 0; i < 5; i++)
		ft_putnbr(res[i]);
	ft_putchar('\n');
	free(res);
	int test2[] = {-25,0,20,45};
	res = ft_map(test2, 3, inc_num);
	for (int i = 0; i < 3; i++)
		ft_putnbr(res[i]);
	ft_putchar('\n');
	free(res);
	int test3[] = {5};
	res = ft_map(test3, 0, inc_num);
	for (int i = 0; i < 0; i++)
		ft_putnbr(res[i]);
	ft_putchar('\n');
	free(res);
	return (0);
}
