/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 22:19:52 by sako              #+#    #+#             */
/*   Updated: 2019/04/02 22:25:27 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
	int n;

	n = ft_atoi("0");
	printf("%d\n", n);
	n = ft_atoi("15");
	printf("%d\n", n);
	n = ft_atoi("-25");
	printf("%d\n", n);
	n = ft_atoi("12345");
	printf("%d\n", n);
	n = ft_atoi("987654321");
	printf("%d\n", n);
	n = ft_atoi("-34567");
	printf("%d\n", n);
	n = ft_atoi("2147483647");
	printf("%d\n", n);
	n = ft_atoi("-2147483648");
	printf("%d\n", n);
	n = ft_atoi("\t\n\v\f\r +256");
	printf("%d\n", n);
	n = ft_atoi("256a99999");
	printf("%d\n", n);
	n = ft_atoi("++4");
	printf("%d\n", n);
	n = ft_atoi("a4");
	printf("%d\n", n);
	n = ft_atoi("-  123");
	printf("%d\n", n);
	return (0);
}
