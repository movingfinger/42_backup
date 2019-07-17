/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:17:35 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 16:20:07 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_char_compare(char c1, char c2)
{
	if (c1 == c2)
		return (1);
	return (0);
}

int		ft_check_duplicate(char c, char *str, int n)
{
	while (n >= 1)
	{
		if (c == str[n])
			return (0);
		n--;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (ft_char_compare(argv[1][i], argv[2][j]))
					if (ft_check_duplicate(argv[1][i], argv[1], i - 1))
					{
						write(1, &argv[1][i], 1);
						break;
					}
				j++;
			}
			j = 0;
			i++;		
		}
		write(1, "\n", 1);
	}
	return (0);
}
