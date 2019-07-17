/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:37:31 by sako              #+#    #+#             */
/*   Updated: 2019/04/04 19:25:27 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *str);

int		main(int argc, char **argv)
{
	char	*a;
	char	*b;
	int		i;

	argc = 1;
	i = 0;
	b = NULL;
	while (argv[i] != '\0')
		i++;
	if (i == 1)
		a = NULL;
	else if (i == 2)
		a = argv[1];
	else
		a = "too much strings!";
	b = ft_strdup(a);
	printf("%d, %s - %s\n", a != b, a, b);
	return (0);
}
