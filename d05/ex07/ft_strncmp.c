/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:56:12 by sako              #+#    #+#             */
/*   Updated: 2019/04/02 22:05:45 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (i < n)
	{
		result += (s1[i] - s2[i]);
		i++;
	}
	return (result);
}
