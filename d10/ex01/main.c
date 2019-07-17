/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 19:45:48 by sako              #+#    #+#             */
/*   Updated: 2019/04/08 21:49:51 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		main(void)
{
	void (*f)(int);

	f = &ft_putnbr;
	f(-25);
	ft_putchar('\n');
	int test1[] = {1, 2, 3, 4, 5};
	int test2[] = {-25, 0, 20, 45};
	int test3[] = {5};
	ft_foreach(test1, 5, ft_putnbr);
	ft_foreach(test2, 3, ft_putnbr);
	ft_foreach(test3, 0, ft_putnbr);
	return (0);
}
