/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:36:36 by sako              #+#    #+#             */
/*   Updated: 2019/04/07 23:22:31 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		match(char *s1, char *s2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		r;
	char	*x;
	char	*y;

	x = "srkica";
	y = "*ica";
	r = match(x, y);
	ft_putchar(r + '0');
	ft_putchar('\n');
	return (0);
}
