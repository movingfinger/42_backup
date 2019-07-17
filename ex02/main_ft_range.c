/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 16:01:00 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 17:20:43 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main(int ac, char **av)
{
	int	*s;
	int	n;
	int	min;
	int	max;

	if (ac != 3)
		return (0);
	min = atoi(av[1]);
	max = atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;
	n -= 1;
	s = ft_range(min, max);
	while(min <= max)
	{
		printf("%d\n", s[n--]);
		min++;
	}
	return (1);
}
