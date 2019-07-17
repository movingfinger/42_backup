/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 00:19:01 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 11:41:12 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		main(int ac, char **av)
{
	int		n1;
	int		n2;
	char	op;

	if (ac == 4)
	{
		n1 = atoi(av[1]);
		n2 = atoi(av[3]);
		op = av[2][0];
		if (op == '+')
			printf("%d", n1 + n2);
		if (op == '-')
			printf("%d", n1 - n2);
		if (op == '*')
			printf("%d", n1 * n2);
		if (op == '/')
			printf("%d", n1 / n2);
		if (op == '%')
			printf("%d", n1 % n2);
	}
	printf("\n");
	return (0);
}
