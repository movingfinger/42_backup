/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 10:20:47 by sako              #+#    #+#             */
/*   Updated: 2019/04/04 11:36:39 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);
int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	int		i;
	int		min;
	int		max;
	int		*num;
	int		range;

	i = 0;
	min = 0;
	max = 0;
	if (argc == 3)
	{
		min = ft_atoi(argv[1]);
		max = ft_atoi(argv[2]);
		printf("%d - %d\n", min, max);
		range = max - min;
		if (range < 0)
			range *= -1;
		num = ft_range(min, max);
		while (i < (max - min))
		{
			printf("%d", num[i]);
			i++;
		}
	}
	else
		return (0);
	return (0);
}
