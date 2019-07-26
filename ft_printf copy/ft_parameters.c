/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parameters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:13:50 by sako              #+#    #+#             */
/*   Updated: 2019/07/24 23:53:49 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
**	check if printf parameter has flag parts, {'-', '+', '#', '0', ' '}, continuously,
**	and return the flag character arrays if possible. No flag characters exist, return NULL.
*/

int		ft_checkflag(char *str, t_format *param)
{
	char	*flags;
	int		i;
	int		j;
	int		index;
	int		find;

	flags = ft_strdup("-+#0 ");
	index = -1;
	if (!param)
		return (index);
	i = -1;
	find = 1;
	while (str[++i] && find)
	{
		j = -1;
		find = 0;
		while (flags[++j])
		{
			if (str[i] == flags[j])
			{
				index = i;
				find = 1;
			}
		}
	}
	if (index == -1)
		param->flag = NULL;
	else
		param->flag = ft_strsub(str, 0, index + 1);
	free(flags);
	return (index);
}

/*
**	check if printf parameter has width part, number or '*' which means read
**	number from next argument. If width character is '*', width returns -1, and
**	index return 1. If width is number, width returnes number, and index returns
**	length of number. Other cases, width and index remains 0.
*/

int		ft_checkwidth(char *str, t_format *param)
{
	int		width;
	int		index;

	width = 0;
	if (!param)
		return (-1);
	index = 0;
	if (str[0] == '*')
	{
		index = 1;
		width = -1;
	}
	else if ((width = ft_atoi(str)) != 0)
		index = check_num_length(width);
	param->width = width;
	return (index);
}

/*
**	check if printf parameter has precision part, with '.' and number  and'*'
**	which means read number from next argument or nothing, means same as 0.
**	If width character is '.*', width returns -1, and index return 2. If
**	width is number, width returnes number, and index returns length of
**	number + 1. Other cases, width and index remains 0.
*/

int		ft_checkprecision(char *str, t_format *param)
{
	int		precision;
	int		index;
	char	*temp;

	temp = NULL;
	precision = -1;
	if (!param)
		return (-1);
	index = -1;
	if (str[0] == '.')
	{
		temp = ft_strsub(str, 1, ft_strlen(str) - 1);
		if (temp[0] == '*')
		{
			index = 1;
			precision = -1;
		}
		else if (temp[0] == '0')
		{
			index = 1;
			precision = 0;
		}
		else if (!ft_isdigit(temp[0]))
		{
			index = 0;
			precision = 0;
		}
		else if ((precision = ft_atoi(temp)) != 0)
			index = check_num_length(precision);
	}
	param->precision = precision;
	free(temp);
	return (index + 1);
}

/*
**	check printf parameter has length characters, {hh, h, l, ll, L}.
*/

int		ft_checklength(char *str, t_format *param)
{
	int		index;

	index = 0;
	param->length = NULL;
	if (!param)
		return (-1);
	param->length = (str[0] == 'h' ? "h" : param->length);
	param->length = (str[0] == 'l' ? "l" : param->length);
	param->length = (str[0] == 'L' ? "L" : param->length);
	param->length = ((ft_strstr(str, "hh") != NULL) ? "hh" : param->length);
	param->length = ((ft_strstr(str, "ll") != NULL) ? "ll" : param->length);
	if (param->length)
	{
		if ((ft_strlen(param->length) == 2))
			index = 2;
		else if ((ft_strlen(param->length) == 1))
			index = 1;
	}
	return (index);
}

/*
**	check which type parameter is.
**	c (char), s(string), p(ptr)
**	d, i(int), o(oct), u(unsigned int), xX (hex),
*/

int		ft_checktype(char *str, t_format *param)
{
	char	*types;
	int		i;

	i = -1;
	types = ft_strdup("diuoxXfFeEgGaAcspn");
	if (!param)
		return (-1);
	while (types[++i])
	{
		if (str[0] == types[i])
			param->type = types[i];
	}
	free(types);
	return (0);
}
