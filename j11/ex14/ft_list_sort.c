/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 02:37:39 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/28 22:52:27 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void			ft_swap(t_list **list1, t_list **list2)
{
	t_list		*swap;

	swap = (*list1)->data;
	(*list1)->data = (*list2)->data;
	(*list2)->data = swap;
}

void			ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list		*tmp1;
	t_list		*tmp2;
	int			test;

	test = 1;
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	while (test != 0)
	{
		test = 0;
		tmp1 = *begin_list;
		tmp2 = tmp1->next;
		while (tmp2 != NULL)
		{
			if ((*cmp)(tmp1->data, tmp2->data) > 0)
			{
				ft_swap(&tmp1, &tmp2);
				test = 1;
			}
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
}
