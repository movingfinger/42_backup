/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 23:39:29 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 11:43:59 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		div = 128;
	int		num; = octet;

	while (div != 0)
	{
		if (div <= num)
		{
			write (1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div /= 2;
	}
}
