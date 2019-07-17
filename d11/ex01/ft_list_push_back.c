/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:41:39 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 21:43:06 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*current_list;

	current_list = *begin_list;
	if (current_list)
	{
		while (current_list->next)
			current_list = current_list->next;
		current_list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
