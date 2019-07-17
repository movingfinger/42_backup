/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 22:16:14 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 22:49:26 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;
	t_list	*temp;

	list = *begin_list;
	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
	*begin_list = NULL;
	return ;
}
