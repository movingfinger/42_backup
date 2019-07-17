/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 23:19:51 by sako              #+#    #+#             */
/*   Updated: 2019/04/08 23:57:25 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		ft_diff(int n1, int n2)
{
	return (n1 - n2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		n[argc - 1];

	i = 0;
	while (i < argc)
	{
		n[i] = atoi(argv[i]);
		i++;
	}
	ft_putchar(ft_is_sort(n, argc - 1, ft_diff) + '0');
	ft_putchar('\n');
	return (0);
}
