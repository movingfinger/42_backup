/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:43:48 by sako              #+#    #+#             */
/*   Updated: 2019/04/02 22:06:35 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	int n;

	n = ft_strncmp("asdf", "asdf", 4);
	printf("%d\n", n);
	n = ft_strncmp("asde", "asdf", 4);
	printf("%d\n", n);
	n = ft_strncmp("asdg", "asdf", 4);
	printf("%d\n", n);
	n = ft_strncmp("asdf", "asdf", 3);
	printf("%d\n", n);
	n = ft_strncmp("asde", "asdf", 3);
	printf("%d\n", n);
	n = ft_strncmp("", "", 0);
	printf("%d\n", n);
	return (0);
}
