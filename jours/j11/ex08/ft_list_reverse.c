/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 12:43:29 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/22 22:58:51 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*t1;
	t_list		*t2;
	t_list		*t3;

	if (*begin_list == NULL)
		return ;
	t1 = *begin_list;
	if (t1->next == NULL)
		return ;
	t2 = t1->next;
	t3 = t2->next;
	t1->next = NULL;
	t2->next = t1;
	while (t3 != NULL)
	{
		t1 = t2;
		t2 = t3;
		t3 = t3->next;
		t2->next = t1;
	}
	*begin_list = t2;
}
