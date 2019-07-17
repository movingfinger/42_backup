/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 06:58:34 by sako              #+#    #+#             */
/*   Updated: 2019/03/29 08:11:36 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int quotient;
	int remainder;

	quotient = a / b;
	remainder = a % b;
	*div = quotient;
	*mod = remainder;
}

int		main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 10;
	b = 2;
	ft_div_mod(a, b, div, mod);
	printf("%d divided by %d, div: %d\t mod: %d\n", a, b, *div, *mod);
	return (0);
}
