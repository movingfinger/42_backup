/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:20:23 by sako              #+#    #+#             */
/*   Updated: 2019/04/05 00:27:57 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_words(char *str);

char **ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char	**result;
	int		i;
	int		size;

	i = 0;
	argc = 1;
	size = ft_count_words(argv[1]);
	result = ft_split_whitespaces(argv[1]);
	printf("size is %d\n", size);
	while (i < size)
	{
		printf("%d - ", i);
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
