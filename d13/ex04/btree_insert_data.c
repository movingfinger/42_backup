/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sako <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:04:17 by sako              #+#    #+#             */
/*   Updated: 2019/04/12 23:35:48 by sako             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree		*new_node;
	t_btree		*x;
	t_btree		*y;

	new_tree = btree_create_node(item);
	x = *root;
	y = NULL;

	while (x != NULL)
	{
		y = x;
		if (item < x->item)
			x = x->left;
		else
			x = x->right;
	}

	if (y == NULL)
		y = new_node;
	else if (item < y->item)
		y->left = new_node;
	else
		y->right = new_node;
	return (y);
}
