/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 11:58:33 by sako              #+#    #+#             */
/*   Updated: 2019/04/04 14:05:17 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);
int		ft_ultimate_range(int **range, int min, int max);

int		main(int argc, char **argv)
{
	int 	min;
	int		max;
	int		*num;
	int		i;
	int		range;
	int		check;

	i = 0;
	if (argc == 3)
	{
		min = ft_atoi(argv[1]);
		max = ft_atoi(argv[2]);
		printf("min: %d\t max: %d\n", min, max);
		check = ft_ultimate_range(&num, min, max);
		range = max - min;
		if (range < 0)
			range *= -1;
		if (check != 0)
		{
			while (i < range)
			{
				printf("%d,", num[i]);
				i++;
			}
		}
		printf("is null? %d\n", num == NULL);
	}
	return (0);
}
