/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 21:55:32 by sako              #+#    #+#             */
/*   Updated: 2019/03/30 23:42:13 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb > 2)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else if (nb == 2)
		return (1);
	return (0);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (i != 1)
	{
		nb += 1;
		i = ft_is_prime(nb);
	}
	return (nb);
}
