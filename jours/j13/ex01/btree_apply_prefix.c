/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 19:33:19 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/06 22:41:12 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_apply_prefix(t_btree *root, void (*applyf)(void*))
{
	if (root)
	{
		(*applyf)(root->item);
		if (root->left)
			btree_apply_prefix(root->left, (*applyf));
		if (root->right)
			btree_apply_prefix(root->right, (*applyf));
	}
}
