/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 11:52:18 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 11:55:11 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	else
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
