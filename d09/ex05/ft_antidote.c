/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:06:01 by sako              #+#    #+#             */
/*   Updated: 2019/04/05 15:29:33 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	int		n1;
	int		n2;
	int		n3;;

	n1 = i;
	n2 = j;
	n3 = k;
	if (i > j)
	{
		n3 = i;
		n2 = j;
		if (n3 < k)
		{
			n3 = k;
		}
		else
		{
			if (n2 < k)
				n2 = k;
		}
	}
	return (n2);
}
