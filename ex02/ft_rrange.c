/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 20:33:14 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 20:53:18 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		i;
	int		j;
	int		*n;

	i = start>= end ? start - end : end - start;
	n = malloc(sizeof(int) * (i + 1));
	j = 0;
	while (i >= j)
		n[j++] = end >= start? end-- : end++;
	return (n);;
}
