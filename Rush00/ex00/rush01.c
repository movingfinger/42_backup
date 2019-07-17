/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:27:54 by sako              #+#    #+#             */
/*   Updated: 2019/04/13 11:19:43 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int v;
	int h;

	v = 0;
	h = 0;
	while (v < y)
	{
		while (h < x)
		{
			if ((h == 0 && v == 0) || (h == (x - 1) && v == (y - 1)))
				ft_putchar('/');
			else if ((h == 0 && v == (y - 1)) || (h == (x - 1) && v == 0))
				ft_putchar('\\');
			else if (h != 0 && h != (x - 1) && v != 0 && v != (y - 1))
				ft_putchar(' ');
			else
				ft_putchar('*');
			h++;
		}
		v++;
		ft_putchar('\n');
		h = 0;
	}
}
