/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 19:33:19 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/08 01:04:40 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return (NULL);
	if (cmpf(data_ref, root->item) != 0)
		btree_search_item(root->left, data_ref, cmpf);
	if (cmpf(data_ref, root->item) == 0)
		return (root->item);
	if (cmpf(data_ref, root->item) != 0)
		btree_search_item(root->right, data_ref, cmpf);
	return (NULL);
}
