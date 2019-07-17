#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list  *sort_list(t_list* lst, int (*cmp)(int, int));

t_list	*ft_create_elem(int	data)
{
	t_list	*list = NULL;

	list = (t_list *)malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void	ft_list_push_back(t_list **lst, int data)
{
	t_list	*list;

	list = *lst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*lst = ft_create_elem(data);
}

int 	ascending(int a, int b)
{
	return (a <= b);
}

int		main(int ac, char **av)
{
	t_list	*lst;
	t_list	*sort;

	lst = NULL;
	if (ac > 2)
	{
		for (int i = 1; i < ac; i++)
			ft_list_push_back(&lst, atoi(av[i]));
		sort = sort_list(lst, ascending);
		while (sort != NULL)
		{
			printf("%d\n", sort->data);
			sort = sort->next;
		}
	}
	return (0);
}
