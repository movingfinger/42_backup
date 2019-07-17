/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:24:12 by sako              #+#    #+#             */
/*   Updated: 2019/04/14 17:49:19 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle2.h"

void	ft_simple(int x, int y, char *s)
{
	while (g_v < y)
	{
		while (g_h < x)
		{
			if ((g_h == 0 && g_v == 0) ||
				(x != 1 && y != 1 && g_h == x - 1 && g_v == y - 1))
				g_v == 0 ? store('A', s, x) : store('A', s, x + 1);
			else if ((g_h == 0 && g_v == y - 1) || (g_h == x - 1 && g_v == 0))
				g_v == 0 ? store('C', s, x) : store('C', s, x + 1);
			else if ((g_h != 0 && g_h != x - 1) && (g_v != 0 && g_v != y - 1))
				g_v == 0 ? store(' ', s, x) : store(' ', s, x + 1);
			else
				g_v == 0 ? store('B', s, x) : store('B', s, x + 1);
			g_h++;
		}
		g_v == 0 ? store('\n', s, x) : store('\n', s, x + 1);
		g_v++;
		g_h = 0;
	}
	s[g_v * (x + 1) + g_h] = '\0';
	return ;
}

char	*rush04(int x, int y)
{
	char	*s;

	g_v = 0;
	g_h = 0;
	s = malloc(sizeof(char) * (y * (x + 1) + 1));
	ft_simple(x, y, s);
	return (s);
}
