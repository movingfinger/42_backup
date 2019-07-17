/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:51:12 by sako              #+#    #+#             */
/*   Updated: 2019/04/14 17:33:38 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle2.h"

char	*rush00(int x, int y)
{
	char	*s;

	g_v = 0;
	g_h = 0;
	s = malloc(sizeof(char) * (y * (x + 1) + 1));
	while (g_v < y)
	{
		while (g_h < x)
		{
			if ((g_h == 0 || g_h == x - 1) && (g_v == 0 || g_v == y - 1))
				g_v == 0 ? store('o', s, x) : store('o', s, x + 1);
			else if ((g_h == 0 || g_h == x - 1) && (g_v != 0 && g_v != y - 1))
				g_v == 0 ? store('|', s, x) : store('|', s, x + 1);
			else if ((g_h != 0 || g_h != x - 1) && (g_v != 0 && g_v != y - 1))
				g_v == 0 ? store(' ', s, x) : store(' ', s, x + 1);
			else
				g_v == 0 ? store('-', s, x) : store('-', s, x + 1);
			g_h++;
		}
		g_v == 0 ? store('\n', s, x) : store('\n', s, x + 1);
		g_v++;
		g_h = 0;
	}
	s[g_v * (x + 1) + g_h] = '\0';
	return (s);
}
