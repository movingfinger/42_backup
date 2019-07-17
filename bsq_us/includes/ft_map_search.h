/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_search.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 23:59:44 by sako              #+#    #+#             */
/*   Updated: 2019/04/17 22:28:52 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_SEARCH_H
# define FT_MAP_SEARCH_H

int		ft_check_col(int x, int y, int col, int limit);
int		ft_check_row(int x, int y, int col, int limit);
int		ft_check_map(int x, int y, int col, int row);

#endif
