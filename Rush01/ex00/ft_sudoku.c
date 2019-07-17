/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:15:03 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 12:59:16 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		*ft_init_check(void)
{
	int		*check;
	int		i;

	i = 0;
	check = (int*)malloc(sizeof(int) * 9);
	while (i < 9)
	{
		check[i] = 0;
		i++;
	}
	return (check);
}

int		ft_find_pos(int *y, int *x, char **num)
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
			{
				*y = i;
				*x = j;
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	ft_print_result(char **num)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 8)
		{
			write(1, &num[i + 1][j++], 1);
			write(1, " ", 1);
		}
		write(1, &num[i + 1][j], 1);
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

int		ft_sudoku(int v, int h, int count, char **num)
{
	int		*check;

	count = 0;
	check = ft_init_check();
	if (ft_check_finish(num))
	{
		ft_print_result(num);
		return (1);
	}
	else
	{
		ft_find_pos(&v, &h, num);
		check = ft_check_validate(v, h, num);
		while (count < 9)
		{
			if (check[count] != 0)
			{
				num[v + 1][h] = check[count] + '0';
				ft_sudoku(v, h, count, num);
			}
			count++;
		}
		num[v + 1][h] = '.';
	}
	return (0);
}
