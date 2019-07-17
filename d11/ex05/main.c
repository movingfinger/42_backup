/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 21:19:54 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 22:15:19 by sako             ###   ########.fr       */
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
}

int		main(int argc, char **argv)
{
	t_list	*list;

	(void)argc;
	(void)argv;
	list = ft_list_push_params(argc, argv);
	crap_a_list(list);
	return (0);
}
