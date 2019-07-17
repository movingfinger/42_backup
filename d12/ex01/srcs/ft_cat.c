/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:25:07 by sako              #+#    #+#             */
/*   Updated: 2019/04/11 21:09:41 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int		ft_check_error(int err, char *argv)
{
	int		check;

	check = 0;
	if (err == 2)
	{
		ft_putstr("cat: ");
		ft_putstr(argv);
		ft_putstr(": No such file or directory\n");
		check = 1;
	}
	else if (err == 13)
	{
		ft_putstr("cat: ");
		ft_putstr(argv);
		ft_putstr(": Permission denied\n");
		check = 1;
	}
	return (check);
}

void	ft_cat(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	int		check;
	char	buf[BUF_SIZE + 1];

	i = 0;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if ((check = ft_check_error(errno, argv[i])) == 1)
			return ;
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			write(1, buf, ret);
		}
		close(fd);
		i++;
	}
	return ;
}
