/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 22:29:24 by sako              #+#    #+#             */
/*   Updated: 2019/07/26 05:08:02 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

const char	*character(t_format *form, va_list args)
{
	const char	*s;

	s = NULL;
	if (form != NULL)
		s = va_arg(args, char *);
	return (s);
}

const char	*string(t_format *form, va_list args)
{
	const char	*s;

	s = NULL;
	if (form != NULL)
		s = va_arg(args, char *);
	return (s);
}

const char	*pointer(t_format *form, va_list args)
{
	char			*res;
	const char		*itoa_str;
	long long int	temp;

	res = NULL;
	if (form != NULL)
	{
		temp = va_arg(args, long long int);
		itoa_str = ft_itoa_base(temp, 16);
		res = ft_strjoin("0x", itoa_str);
	}
	return ((const char *)res);
}

const char	*integer(t_format *form, va_list args)
{
	const char	*s;

	s = NULL;
	if (form != NULL)
		s = ft_itoa(va_arg(args, int));
	return (s);
}

const char	*ft_format(t_format *form, va_list args)
{
	int				i;
	const char		*final;
	const char		conv[11] = "cspdi%";
	conversion		*convert[11] = {character, string, pointer,  integer, integer};

	i = -1;
	final = NULL;
	while (++i < 5)
	{
		if (conv[i] == form->type)
			final = convert[i](form, args);
	}
	return (final);
}

void	ft_storeformat(char *traverse, t_format *form)
{
	char		*parameter;
	int			index;
	int			i;

	i = -1;
	while (traverse[++i])
	{
		while (*traverse && *traverse != '%')
			ft_putchar(traverse[i++]);
		parameter = ft_strsub(traverse, i + 1, ft_strlen(traverse) - i - 1);
		index = ft_checkflag(parameter, form);
		parameter = ft_strsub(parameter, index + 1, ft_strlen(parameter) - index);
		index = ft_checkwidth(parameter, form);
		parameter = ft_strsub(parameter, index, ft_strlen(parameter) - index);
		index = ft_checkprecision(parameter, form);
		parameter = ft_strsub(parameter, index, ft_strlen(parameter) - index);
		index = ft_checklength(parameter, form);
		parameter = ft_strsub(parameter, index, ft_strlen(parameter) - index);
		ft_checktype(parameter, form);
	}
}

int		ft_parse(va_list arg, const char *format)
{
	char		*traverse;
	t_format	form;

	traverse = (char *)format;
	ft_storeformat(traverse, &form);
	ft_putstr(traverse);
	ft_putstr(" flags: ");
	ft_putstr(form.flag);
	ft_putstr(" width: ");
	ft_putstr(ft_itoa(form.width));
	ft_putstr(" precision: ");
	ft_putstr(ft_itoa(form.precision));
	ft_putstr(" length: ");
	ft_putstr(form.length);
	ft_putstr(" type: ");
	ft_putstr(&form.type);
	ft_putstr(" result: ");
	ft_putendl(ft_format(&form, arg));
	va_end(arg);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	va_list	arg;

	va_start(arg, format);
	ft_parse(arg, format);
	return (0);
}
