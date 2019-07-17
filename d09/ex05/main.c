/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:06:04 by sako              #+#    #+#             */
/*   Updated: 2019/04/05 15:12:13 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_antidote(int i, int j, int k);

int		main(void)
{
	printf("antidote is %d\n", ft_antidote(1, 2, 3));
	printf("antidote is %d\n", ft_antidote(3, 2, 1));
	printf("antidote is %d\n", ft_antidote(1, 22, 43));
	printf("antidote is %d\n", ft_antidote(41, 42, 23));
	return (0);
}
