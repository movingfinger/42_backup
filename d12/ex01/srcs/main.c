/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:28:27 by sako              #+#    #+#             */
/*   Updated: 2019/04/11 21:07:33 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int		main(int argc, char **argv)
{
	char	c;

	if (argc == 1 || (!ft_strcmp(argv[1], "-")))
	{
		while (read(0, &c, 1) > 0)
		{
			write(1, &c, 1);
		}
	}
	else
		ft_cat(argc - 1, argv + 1);
	return (0);
}
