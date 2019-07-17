/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:19:54 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 22:58:52 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int		main(void)
{
	t_list *list;
	t_list *temp;
	
	list = 0;
	list = CE("asdf");
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	temp = ft_list_at(list, 0);
	printf("%s\n", (char*)(temp->data));
	temp = ft_list_at(list, 2);
	printf("%s\n", (char*)(temp->data));
	temp = ft_list_at(list, 1);
	printf("%s\n", (char*)(temp->data));
	return (0);
}
