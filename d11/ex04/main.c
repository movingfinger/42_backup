/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 20:56:53 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 21:15:49 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	crap_a_list(t_list *list)
{
	while (list)
	{
		printf("%s,", (char*)list->data);
		list = list->next;
	}
	printf("\n");
	return ;
}

int		main(void)
{
	t_list *list;

	list = 0;
	//printf("%s\n", (char*)ft_list_last(list)->data);
	list = ft_create_elem("asdf");
	printf("%s\n", (char*)ft_list_last(list)->data);
	list->next = ft_create_elem("qwer");
	printf("%s\n", (char*)ft_list_last(list)->data);
	list->next->next = ft_create_elem("zxcv");
	printf("%s\n", (char*)ft_list_last(list)->data);
	return (0);
}
