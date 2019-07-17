/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:27:29 by sako              #+#    #+#             */
/*   Updated: 2019/04/14 19:28:35 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		if ((str[i] == 9) || (str[i] == 10) || (str[i] == 32))
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

void	ft_assign_str(char *str, char *res, int *i, int *j)
{
	int l;

	l = 0;
	res[*j] = '\0';
	while (l < *j)
	{
		res[l] = str[*i - *j + l];
		l++;
	}
	res[l] = '\0';
	*j = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	res = (char**)malloc(sizeof(char*) * ft_count_words(str));
	while (i <= ft_strlen(str))
	{
		if ((str[i] == 9 || str[i] == 10 || str[i] == 32) || (str[i] == '\0'))
		{
			if (j != 0)
			{
				res[k] = (char*)malloc(sizeof(char) * (j + 1));
				ft_assign_str(str, res[k], &i, &j);
				k++;
			}
			i++;
		}
		while (str[i] >= 33 && str[i++] <= 127)
			j++;
	}
	return (res);
}
