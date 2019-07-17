/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:04:46 by sako              #+#    #+#             */
/*   Updated: 2019/03/29 22:52:06 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	char c;
	int	 count;

	count = 0;
	c = str[count];
	while (c != '\0')
	{
		ft_putchar(c);
		count++;
		c = str[count];
	}
	return (count);
}
