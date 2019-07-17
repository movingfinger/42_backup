/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:14:32 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 11:22:48 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_change_letter(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	else if(c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	c = 0;
	if (argc < 2)
		write(1, "\n", 1);
	while (argv[1][i] != '\0')
	{
		c = ft_change_letter(argv[1][i++]);
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}

