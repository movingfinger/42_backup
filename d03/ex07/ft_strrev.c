/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 10:22:41 by sako              #+#    #+#             */
/*   Updated: 2019/03/29 23:00:51 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		count;
	int		i;
	char	temp_c;

	count = 0;
	i = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	while (count - 1 > i)
	{
		temp_c = str[i];
		str[i] = str[count - 1];
		str[count - 1] = temp_c;
		count--;
		i++;
	}
	return (str);
}
