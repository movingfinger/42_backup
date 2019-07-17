/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:12:45 by sako              #+#    #+#             */
/*   Updated: 2019/04/04 22:51:59 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strsize(char **str)
{
	int		i;
	int		j;
	int		size;

	i = 1;
	j = 0;
	size = 0;
	while (str[i][j++] != '\0')
		size++;
	size++;
	j = 0;
	i++;
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;
	int		size;

	size = 0;
	if (argc == 1)
		return ("");
	else
		size = ft_strsize(argv);
	str = (char*)malloc(sizeof(*str) * size);
	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			str[k++] = argv[i][j++];
		i++;
		j = 0;
		str[k++] = '\n';
	}
	return (str);
}
