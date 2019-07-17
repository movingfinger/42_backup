/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 08:12:10 by sako              #+#    #+#             */
/*   Updated: 2019/03/29 08:22:34 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a;
	int temp_b;
	int div;
	int mod;

	temp_a = *a;
	temp_b = *b;
	div = temp_a / temp_b;
	mod = temp_a % temp_b;
	*a = div;
	*b = mod;
}

int 	main(void)
{
	int *a;
	int *b;
	int temp_a;
	int temp_b;

	temp_a = 10;
	temp_b = 5;
	*a = temp_a;
	*b = temp_b;
	ft_ultimate_div_mod(a, b);
	return (0);
}
