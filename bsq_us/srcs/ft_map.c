/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:42:44 by sako              #+#    #+#             */
/*   Updated: 2019/04/17 23:36:55 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"
#include "bsq_header.h"
#include "ft_check_error.h"

int		ft_find_firstline_index(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			break ;
		i++;
	}
	return (i);
}

char	*ft_readmap(char **argv)
{
	int		fd;
	int		error;
	char	*str;
	char	buf[BUF_SIZE + 1];
	int		ret;

	errno = 0;
	fd = open(argv[0], O_RDONLY);
	if ((error = ft_check_error(errno, argv[0])) == 1)
		return (NULL);
	while ((ret = read(fd, &buf, BUF_SIZE)))
		buf[ret] = '\0';
	close(fd);
	str = malloc(sizeof(char) * (ft_strlen(buf) + 1));
	str = ft_strmalloccpy(buf);
	return (str);
}

int		ft_check_firstline_num(char *str, int length)
{
	int		line;
	int		i;

	i = 0;
	line = 0;
	if (length == 1)
	{
		if (str[0] < '0' || str[0] > '9')
			return (-1);
		else
			line = str[0] - '0';
	}
	else
	{
		while (length > 0)
		{
			if (str[i] < '0' || str[i] > '9')
				return (-1);
			else
				line = line * 10 + str[i] - '0';
			length--;
			i++;
		}
	}
	return (line);
}

char	*ft_store_firstline(char *first_line, char *str, int *line)
{
	int		int_char;
	int		j;
	int		length;

	length = 0;
	int_char = ft_find_firstline_index(str);
	length = int_char;
	int_char = 3;
	j = length;
	while (int_char > 0)
		first_line[--int_char] = str[--length];
	*line = ft_check_firstline_num(str, length);
	if (*line == -1)
		return (NULL);
	return (first_line);
}

char	*ft_store_map(char *str)
{
	int		i;
	int		j;
	int		count;
	int		length;
	char	*map;

	i = 0;
	j = 0;
	count = 0;
	i = ft_find_firstline_index(str);
	length = i;
	i++;
	length = ft_strlen(str) + 1;
	map = malloc(sizeof(char) * (length - i));
	while (str[i] != '\0')
	{
		if (str[i] == g_first_line[0] || str[i] == g_first_line[1] ||
			str[i] == g_first_line[2] || str[i] == '\n')
			map[j++] = str[i++];
		else
			return (NULL);
	}
	map[j] = '\0';
	return (map);
}
