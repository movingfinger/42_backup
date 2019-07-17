/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:19:54 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 23:40:00 by sako             ###   ########.fr       */
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
	
	list = 0;
	list = CE("asdf");
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	CL(list);
	ft_list_reverse(&list);
	CL(list);
	return (0);
}
