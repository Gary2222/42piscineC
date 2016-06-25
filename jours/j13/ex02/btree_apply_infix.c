/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/06 19:33:19 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/07 00:47:02 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	if (root)
	{
		btree_apply_infix(root->left, (*applyf));
		(*applyf)(root->item);
		btree_apply_infix(root->right, (*applyf));
	}
}
