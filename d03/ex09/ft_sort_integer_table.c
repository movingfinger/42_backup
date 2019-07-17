/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:39:36 by sako              #+#    #+#             */
/*   Updated: 2019/03/29 22:43:30 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int count;
	int loop_i;
	int temp_sw;

	count = 0;
	while (count < size)
	{
		loop_i = count + 1;
		while (loop_i < size)
		{
			if (tab[count] > tab[loop_i])
			{
				temp_sw = tab[count];
				tab[count] = tab[loop_i];
				tab[loop_i] = temp_sw;
			}
			loop_i++;
		}
		count++;
	}
}
