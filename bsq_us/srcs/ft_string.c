/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <sako@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:35:12 by sako              #+#    #+#             */
/*   Updated: 2019/04/16 22:47:55 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_doublestrlen(char **str)
{
	int		i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

char	*ft_strmalloccpy(char *src)
{
	int		i;
	int		length;
	char	*dest;

	i = 0;
	length = ft_strlen(src);
	dest = malloc(sizeof(char) * length + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strmalloccpy2(char *src)
{
	int		i;
	int		length;
	char	*dest;

	i = 0;
	length = ft_strlen(src);
	dest = malloc(sizeof(char) * length + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (dest);
}
