/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 11:37:14 by sako              #+#    #+#             */
/*   Updated: 2019/04/04 22:54:00 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*num;

	if (min >= max)
	{
		*range = (void*)(0);
		return (0);
	}
	else
	{
		num = (int*)malloc(sizeof(int) * (max - min));
		i = 0;
		while (min < max)
		{
			num[i] = min;
			i++;
			min++;
		}
	}
	*range = num;
	return (i);
}
