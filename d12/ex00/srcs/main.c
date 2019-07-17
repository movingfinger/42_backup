/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 11:28:27 by sako              #+#    #+#             */
/*   Updated: 2019/04/11 12:10:36 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int		main(int argc, char **argv)
{
	if (argc == 1 || argc >= 3)
	{
		if (argc == 1)
			write(1, "File name missing.\n", 19);
		else if (argc >= 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argc - 1, argv + 1);
	return (0);
}
