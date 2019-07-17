/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 19:41:18 by sako              #+#    #+#             */
/*   Updated: 2019/04/10 21:05:16 by sako             ###   ########.fr       */
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

int		main(void)
{
	t_list	*list;

	list = 0;
	printf("%d\n", ft_list_size(list));
	list = ft_create_elem("asdf");
	printf("%d\n", ft_list_size(list));
	list->next = ft_create_elem("qwer");
	list->next->next = ft_create_elem("asdf");
	printf("%d\n", ft_list_size(list));
	list = ft_create_elem("asdf");
	list->next = ft_create_elem("asdf");
	list->next->next = ft_create_elem("asdf");
	list->next->next->next = ft_create_elem("asdf");
	printf("%d\n", ft_list_size(list));
	list->next->next->next->next = ft_create_elem("asdf");
	printf("%d\n", ft_list_size(list));
	return (0);
}
