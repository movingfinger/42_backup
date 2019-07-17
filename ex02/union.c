/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:30:31 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 16:40:01 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_seen_before(char c, char *s, int max)
{
	int		i;

	i = 0;
	while (max > i)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		ft_union(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (not_seen_before(s1[i], s1, i))
			write(1, &s1[i], 1);
		i++;
	}
	while (s2[j])
	{
		if (not_seen_before(s2[j], s1, j) && (not_seen_before(s2[j], s2, j)))
				write(1, &s2[j], 1);
		j++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
