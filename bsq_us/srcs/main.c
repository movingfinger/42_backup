/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 10:50:53 by sako              #+#    #+#             */
/*   Updated: 2019/04/17 22:51:04 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"
#include "ft_print.h"
#include "ft_string.h"
#include "ft_map_search.h"

void	ft_replace_empty(char *g_map)
{
	int		x;
	int		y;

	x = g_start_x;
	y = g_start_y;
	g_end_x = x + g_size_max;
	g_end_y = y + g_size_max;
	while (y < g_end_y)
	{
		while (x < g_end_x)
		{
			g_map[y * (g_col + 1) + x] = g_first_line[2];
			x++;
		}
		x = g_start_x;
		y++;
	}
	return ;
}

int		ft_find_big_square(int *x, int *y, char *g_map)
{
	while (*y < g_row)
	{
		while (*x < g_col)
		{
			g_size = ft_check_map(*x, *y, g_col, g_row);
			if (g_size > g_size_max)
			{
				g_size_max = g_size;
				g_start_x = *x;
				g_start_y = *y;
			}
			*x += 1;
		}
		*x = 0;
		*y += 1;
	}
	ft_replace_empty(g_map);
	ft_putstr(g_map);
	free(g_first_line);
	free(g_map);
	return (0);
}

int		ft_check_line_length(char *map, int col, int row)
{
	int		i;
	int		j;
	int		check;

	i = 0;
	j = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
		{
			j++;
			check = (i + 1) % (col + 1);
			if (check != 0)
				return (1);
		}
		i++;
	}
	if (j != row)
		return (1);
	return (0);
}

int		bsq(int argc, char **argv)
{
	int		x;
	int		y;
	int		error;
	char	*str;

	x = 0;
	y = 0;
	error = 0;
	if (argc >= 2)
	{
		str = ft_readmap(argv);
		if (str == NULL)
			return (1);
		g_first_line = malloc(sizeof(char) * 4);
		g_first_line[3] = '\0';
		g_first_line = ft_store_firstline(g_first_line, str, &g_row);
		g_map = ft_store_map(str);
		g_col = (ft_strlen(g_map) / g_row) - 1;
		if (g_map == NULL || ft_check_line_length(g_map, g_col, g_row) ||
			g_first_line == NULL)
			return (1);
		error = ft_find_big_square(&x, &y, g_map);
		free(str);
	}
	return (error);
}

int		main(int argc, char **argv)
{
	int		i;
	int		error;
	int		count;
	char	c;

	error = 0;
	count = 1;
	i = 0;
	if (argc < 2)
	{
		while (read(0, &c, 1) > 0)
			write(1, &c, 1);
		return (0);
	}
	while (count < argc)
	{
		g_row = 0;
		g_size = 0;
		g_size_max = 0;
		error = bsq(argc, argv + count);
		if (error == 1)
			ft_putstr("map error\n");
		count++;
	}
	return (0);
}
