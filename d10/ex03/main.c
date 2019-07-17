/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:57:12 by sako              #+#    #+#             */
/*   Updated: 2019/04/08 22:27:58 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_any(char **tab, int(*f)(char*));

int		ft_check_z(char *str)
{
	return (str[0] == 'z');
}

int		main(int argc, char **argv)
{
	ft_putchar(ft_any(argv + 1, ft_check_z) + '0');
	ft_putchar('\n');
	if (argc < 2)
		return (1);
	return (0);
}
