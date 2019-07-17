/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:48:28 by sako              #+#    #+#             */
/*   Updated: 2019/04/11 22:53:27 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"
#include "stdio.h"

int		ft_check_error(int err, char *argv)
{
	int		check;

	check = 0;
	if (err == 2)
	{
		ft_putstr("tail: ");
		ft_putstr(argv);
		ft_putstr(": No such file or directory\n");
		check = 1;
	}
	else if (err == 13)
	{
		ft_putstr("tail: ");
		ft_putstr(argv);
		ft_putstr(": Permission denied\n");
		check = 1;
	}

	return (check);
}

void	ft_tail(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	int		n;
	char	buf[BUF_SIZE + 1];

	n = ft_atoi(argv[0]) * (-1);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (ft_check_error(errno, argv[i]) == 1)
			return ;
		lseek(fd, n, SEEK_END);
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
