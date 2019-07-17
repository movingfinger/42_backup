/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:19:54 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 22:41:38 by sako             ###   ########.fr       */
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
	t_list* list = 0;
	list = CE("asdf");
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	CL(list);
	ft_list_clear(&list);
	if (list == NULL)
		printf("null!\n");
	else
		printf("not empty!\n");
	return (0);
}
