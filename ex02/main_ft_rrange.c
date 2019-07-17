/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_rrange.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 20:33:11 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 20:53:42 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end);

int		main(int argc, char **argv)
{
	int		n1;
	int		n2;
	int		size;
	int		*list;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		size = n1 >= n2 ? n1 - n2 : n2 - n1;
		list = ft_rrange(n1, n2);
		while (size >= 0)
		{
			printf("%d ", *list++);
			size--;
		}
	}
	printf("\n");
	return (0);
}
