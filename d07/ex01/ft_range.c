/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:57:13 by sako              #+#    #+#             */
/*   Updated: 2019/04/04 23:02:26 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		*num;
	int		i;

	size = 0;
	if (min >= max)
		return (NULL);
	else
	{
		size = max - min - 1;
		num = (int*)malloc(sizeof(int) * size);
		i = 0;
		while (min < max)
		{
			num[i] = min;
			min++;
			i++;
		}
	}
	return (num);
}
