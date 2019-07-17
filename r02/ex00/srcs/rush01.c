/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:27:54 by sako              #+#    #+#             */
/*   Updated: 2019/04/14 17:30:06 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle2.h"

char	*rush01(int x, int y)
{
	char	*s;

	g_v = 0;
	g_h = 0;
	s = malloc(sizeof(char) * (y * (x + 1) + 1));
	while (g_v < y)
	{
		while (g_h < x)
		{
			if ((g_h == 0 && g_v == 0) || (g_h == (x - 1) && g_v == (y - 1)))
				y == 0 ? store('/', s, x) : store('/', s, x + 1);
			else if ((g_h == 0 && g_v == y - 1) || (g_h == x - 1 && g_v == 0))
				y == 0 ? store('\\', s, x) : store('\\', s, x + 1);
			else if (g_h != 0 && g_h != (x - 1) && g_v != 0 && g_v != (y - 1))
				y == 0 ? store(' ', s, x) : store(' ', s, x + 1);
			else
				y == 0 ? store('*', s, x) : store('*', s, x + 1);
			g_h++;
		}
		y == 0 ? store('\n', s, x) : store('\n', s, x + 1);
		g_v++;
		g_h = 0;
	}
	s[g_v * (x + 1) + g_h] = '\0';
	return (s);
}
