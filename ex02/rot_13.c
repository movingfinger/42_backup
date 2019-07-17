/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:23:56 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 13:02:27 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_rot_13(char c)
{
	int count;

	count = 0;
	if (c >= 'A' && c <= 'Z')
	{
		count = (c - 'A' + 13) % 26;
		c = 'A' + count;
	}
	else if (c >= 'a' && c <= 'z')
	{
		count = (c - 'a' + 13) % 26;
		c = 'a' + count;
	}
	write(1, &c, 1);
	return (c);
}

int		main(int argc, char **argv)
{
	int		i;
	char	c;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			c = ft_rot_13(argv[1][i++]);
	}
	write(1, "\n", 1);
	return (0);
}
