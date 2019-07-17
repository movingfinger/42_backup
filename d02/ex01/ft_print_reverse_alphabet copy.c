/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 08:27:17 by sako              #+#    #+#             */
/*   Updated: 2019/03/28 14:34:02 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char temp;

	char_temp = 'z';
	while (char_temp <= 'a')
	{
		ft_putchar(char_temp);
		char_temp++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
