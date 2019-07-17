/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:00:49 by sako              #+#    #+#             */
/*   Updated: 2019/04/02 21:40:16 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	int n;

	n = 0;
	n = ft_strcmp("asdf", "asdf");
	printf("%d\n", n);
	n = ft_strcmp("asde", "asdf");
	printf("%d\n", n);
	n = ft_strcmp("asdg", "asdf");
	printf("%d\n", n);
	n = ft_strcmp("", "");
	printf("%d\n", n);
	n = ft_strcmp("A", "");
	printf("%d\n", n);
	n = ft_strcmp("", "A");
	printf("%d\n", n);
	return (0);
}
