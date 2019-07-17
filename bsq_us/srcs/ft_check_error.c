/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:18:05 by sako              #+#    #+#             */
/*   Updated: 2019/04/17 18:24:13 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check_error.h"

int		ft_check_error(int err, char *argv)
{
	int		check;

	check = 0;
	if (err == 2)
	{
		ft_putstr(argv);
		ft_putstr(": No such file or directory\n");
		check = 1;
	}
	else if (err == 13)
	{
		ft_putstr(argv);
		ft_putstr(": Permission denied\n");
		check = 1;
	}
	return (check);
}
