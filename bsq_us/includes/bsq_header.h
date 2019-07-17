/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:22:35 by sako              #+#    #+#             */
/*   Updated: 2019/04/17 23:06:07 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include "ft_print.h"
# include "ft_string.h"
# include "ft_map_search.h"

# define BUF_SIZE 4096 * 2000

char	*ft_readmap(char **argv);
char	*ft_store_firstline(char *first_line, char *str, int *line);
char	*ft_store_map(char *str);
int		ft_atoi(char *str);

int		g_start_x;
int		g_start_y;
int		g_end_x;
int		g_end_y;
int		g_size;
int		g_size_max;
int		g_col;
int		g_row;
char	*g_first_line;
char	*g_map;

#endif
