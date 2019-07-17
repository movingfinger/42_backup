/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:27:29 by sako              #+#    #+#             */
/*   Updated: 2019/04/05 11:00:06 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_count_words(char *str)
{
	int		i;
	int		j;
	int		num;

	i = 0;
	j = 0;
	num = 0;
	while (str[i] != '\0')
	{
		//if ((str[i] == 9) || (str[i] == 10) || (str[i] == 32))
		printf("%c\n", str[i]);
		if ((str[i] == '\t') || (str[i] == '\n') || (str[i] == ' '))
		{
			if (j != 0)
			{
				num++;
				j = 0;
			}
			i++;
		}
		while (str[i] >= 33 && str[i] <= 126)
		{
			j++;
			i++;
		}
	}
	return (num + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (str == NULL)
		return (NULL);
	res = (char**)malloc(sizeof(char*) * ft_count_words(str));
	while (i <= ft_strlen(str))
	{
		if ((str[i] == 9) || (str[i] == 10) || (str[i] == 32) || (str[i] == '\0'))
		{
			if (j != 0)
			{
				res[k] = (char*)malloc(sizeof(char) * j);
				res[k][j] = '\0';
				while (l < j)
				{
					res[k][l] = str[i - j + l];
					l++;
				}
				j = 0;
				l = 0;
				k++;
			}
			i++;
		}
		while (str[i] >= 33 && str[i] <= 127)
		{
			i++;
			j++;
		}
	}
	return (res);
}
