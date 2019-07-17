/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 22:41:58 by sako              #+#    #+#             */
/*   Updated: 2019/04/08 23:02:30 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_count_if(char **tab, int (*f)(char*));

int		ft_check_z(char *str)
{
	return (str[0] == 'z');
}

int		main(int argc, char **argv)
{
	ft_putchar(ft_count_if(argv + 1, ft_check_z) + '0');
	ft_putchar('\n');
	if (argc > 2)
		return (1);
	return (0);
}
