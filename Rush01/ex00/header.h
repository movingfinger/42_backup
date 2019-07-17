/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:50:56 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 12:58:44 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

int		ft_sudoku(int v, int h, int count, char **num);
void	ft_print_result(char **num);
int		ft_check_clues(char **num);
int		ft_check_finish(char **num);
int		*ft_check_validate(int y, int x, char **num);
int		ft_check_col(int y, int x, char **num);
int		ft_check_row(int y, int x, char **num);
int		ft_check_rect(int y, int x, char **num);
int		*ft_init_check(void);
int		ft_find_pos(int *y, int *x, char **num);
void	ft_print_result(char **num);
int		ft_sudoku(int v, int h, int count, char **num);
#endif
