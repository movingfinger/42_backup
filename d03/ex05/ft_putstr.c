/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 08:22:49 by sako              #+#    #+#             */
/*   Updated: 2019/03/29 23:33:09 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	char	c;
	int		address;

	address = 0;
	c = str[address];
	while (c != '\0')
	{
		ft_putchar(c);
		address++;
		c = str[address];
	}
	ft_putchar('\n');
}
