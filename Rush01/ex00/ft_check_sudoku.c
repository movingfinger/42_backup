/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 20:18:36 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 12:56:38 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_check_row(int y, int x, char **num)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if ((num[y + 1][i] != '.') && (i != x))
		{
			if (num[y + 1][i] == num[y + 1][x])
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_check_col(int y, int x, char **num)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if ((num[i + 1][x] != '.') && (i != y))
		{
			if (num[i + 1][x] == num[y + 1][x])
				return (0);
		}
		i++;
	}
	return (1);
}

int		ft_check_rect(int y, int x, char **num)
{
	int		i;
	int		j;
	int		check_dot;
	int		check_pos;

	i = 3 * (y / 3);
	j = 3 * (x / 3);
	while (i < 3 * (y / 3) + 3)
	{
		while (j < 3 * (x / 3) + 3)
		{
			check_dot = (num[i + 1][j] != '.');
			check_pos = (i == y) && (j == x);
			if (check_dot && !check_pos)
			{
				if (num[i + 1][j] == num[y + 1][x])
					return (0);
			}
			j++;
		}
		j -= 3;
		i++;
	}
	return (1);
}

int		*ft_check_validate(int y, int x, char **num)
{
	int		finish;
	int		count;
	int		*check;

	finish = 0;
	count = 0;
	check = (int*)malloc(sizeof(int) * 9);
	while (count < 9)
		check[count++] = 0;
	count = 0;
	while (count < 9)
	{
		num[y + 1][x] = (count + 1) + '0';
		finish = ft_check_row(y, x, num) &&
			ft_check_col(y, x, num) && ft_check_rect(y, x, num);
		if (finish == 1)
			check[count] = count + 1;
		count++;
	}
	return (check);
}

int		ft_check_finish(char **num)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (num[i + 1][j] == '.')
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
