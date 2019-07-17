/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:51:44 by sako              #+#    #+#             */
/*   Updated: 2019/03/29 22:42:26 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		count;
	int		i;
	int		target_number;
	int		temp_i;
	int		temp_ten;

	count = 0;
	target_number = 0;
	i = 0;
	while (str[count] != '\0')
		count++;
	while (count > 0)
	{
		temp_i = str[count - 1] - '0';
		temp_ten = i;
		while (temp_ten > 0)
		{
			temp_i *= 10;
			temp_ten--;
		}
		target_number += temp_i;
		i++;
		count--;
	}
	return (target_number);
}
