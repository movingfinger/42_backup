/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:08:32 by sako              #+#    #+#             */
/*   Updated: 2019/03/30 19:47:06 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;

	n = 1;
	if (power > 0)
	{
		while (power > 0)
		{
			n *= nb;
			power--;
		}
	}
	else if (power == 0)
		return (1);
	else
		return (0);
	return (n);
}
