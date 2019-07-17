/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:15:29 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 12:59:31 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_clues(char **num)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (num[i + 1][j] != '.')
				count++;
			j++;
		}
		i++;
		j = 0;
	}
	if (count < 17)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	int		v;
	int		h;
	int		count;

	v = 0;
	h = 0;
	count = 0;
	if (argc != 10)
		write(1, "Error\n", 6);
	else
	{
		if (ft_check_clues(argv))
			ft_sudoku(v, h, count, argv);
	}
	return (0);
}
