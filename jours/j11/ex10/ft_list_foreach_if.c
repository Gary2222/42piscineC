/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 17:59:37 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/25 18:43:59 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return ;
	if (cmp(begin_list->data, data_ref) == 0)
		f(begin_list->data);
	if (begin_list->next != NULL)
		ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
