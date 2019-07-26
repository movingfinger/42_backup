/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:23:39 by sako              #+#    #+#             */
/*   Updated: 2019/07/25 03:29:09 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
** library headers
*/

# include <stdarg.h>
# include <stdlib.h>

/*
** structure
*/

typedef struct	s_format	t_format;

struct			s_format
{
	const char	*flag;
	const char	*length;
	int			precision;
	char		type;
	int			width;
};

/*
** functions
*/

typedef const char	*conversion(t_format *form, va_list args);
const char			*character(t_format *form, va_list args);
const char			*string(t_format *form, va_list args);
const char			*pointer(t_format *form, va_list args);
const char			*integer(t_format *form, va_list args);

/*
**	ft_printf.c
*/

//const char	*ft_format(t_format *form, va_list args);
int			ft_parse(va_list arg, const char *format);
int			ft_printf(const char *format, ...);

/*
**	ft_parameters.c
*/

int		ft_checkflag(char *str, t_format *param);
int		ft_checkwidth(char *str, t_format *param);
int		ft_checkprecision(char *str, t_format *param);
int		ft_checklength(char *str, t_format *param);
int		ft_checktype(char *str, t_format *param);

#endif
