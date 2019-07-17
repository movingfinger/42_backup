/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:29:49 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 15:04:57 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dst;

	length = ft_strlen(src);
	i = 0;
	dst = malloc(sizeof(char) * (length + 1));
	while (i < length)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc == 2)
	{
		s1 = argv[1];
		s2 = ft_strdup(s1);
		printf("%s", s2);
	}
	printf("\n");
	return (0);
}
