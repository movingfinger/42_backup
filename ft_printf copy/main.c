/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:20:32 by sako              #+#    #+#             */
/*   Updated: 2019/07/26 05:08:10 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int		a = 0;
	//printf("%*.*d\n", 2, 10, 1);
	//printf("%s%d\n", "hi", 100);
	//printf("%#e\n",0.01);
	//printf("%e\n",0.0);
	//printf("%#e\n",0.0);
	//printf("%d\n", 10);
	//printf("   %d\n", 10);
	//ft_printf("%#- fabcde");

	/*
	ft_printf("%#+032d");
	ft_printf("%2lld");
	ft_printf("%ha");
	ft_printf("%# 4.0f", 23.5);
	ft_printf("%.0Lf", 0.0);
	ft_printf("%.f", 23.5);
	ft_printf("%#.llf", 23.5);
	ft_printf("%#242f", 0.0);
	*/

	//ft_printf("%p", (void *) &a);
	//ft_printf("%p", 0x123456);
	ft_printf("%p", &a);
	//ft_printf("%p%d", &a, 2);
	/*
	ft_printf("%d", 2);
    ft_printf("%s", "23");
    ft_printf("%s", "lkfjsldjs");
    ft_printf("%.d", 23);
    ft_printf("%.d", 23);
    ft_printf("%d", 234);
    ft_printf("%d", 0);
    ft_printf("%d", 2147483647);
	*/

	return (0);
}
