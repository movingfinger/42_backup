/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:46:24 by sako              #+#    #+#             */
/*   Updated: 2019/04/17 15:07:54 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int		ft_check_col(int x, int y, int col, int limit)
{
	int		index;

	while (x > limit)
	{
		x--;
		index = y * (col + 1) + x;
		if (g_map[index] == g_first_line[1])
			return (1);
	}
	return (0);
}

int		ft_check_row(int x, int y, int col, int limit)
{
	int		index;

	while (y > limit)
	{
		y--;
		index = y * (col + 1) + x;
		if (g_map[index] == g_first_line[1])
			return (1);
	}
	return (0);
}

int		ft_check_map(int x, int y, int col, int row)
{
	int		i;
	int		check_row;
	int		check_col;
	int		row_limit;
	int		col_limit;

	i = 1;
	row_limit = y;
	col_limit = x;
	while (g_map[y++ * (col + 1) + x++] != g_first_line[1])
	{
		check_col = ft_check_col(x, y, col, col_limit) != 1;
		check_row = ft_check_row(x, y, col, row_limit) != 1;
		if (!(check_row && check_col && (x < col) &&
		(y < row) && (g_map[y * (col + 1) + x] != g_first_line[1])))
		{
			if (i == 1)
				i = 0;
			return (i);
		}
		i++;
	}
	if (i == 1)
		i = 0;
	return (i);
}
