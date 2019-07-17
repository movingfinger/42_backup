/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 00:05:29 by sako              #+#    #+#             */
/*   Updated: 2019/04/18 00:18:51 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int len;
	int i;
	int	j;
	
	len = 0;
	i = 0;
	j = 0;
	while (s1[len])
		len++;
	while (s2[j] && i < len)
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (i == len)
		write(1, s1, len);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
