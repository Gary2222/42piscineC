/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 12:43:29 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/03/02 17:47:45 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if ((begin_list == NULL) || ((nbr == 1 && begin_list->next == NULL)))
		return (NULL);
	if (nbr == 0)
		return (begin_list);
	else
		return (ft_list_at(begin_list->next, nbr - 1));
}

int			ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}

void		ft_swap(t_list **tmp1, t_list **tmp2)
{
	t_list	*tmp_data;

	tmp_data = (*tmp1)->data;
	(*tmp1)->data = (*tmp2)->data;
	(*tmp2)->data = tmp_data;
}

void		ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*new_list;
	int		list_size;
	int		i;
	int		j;

	list_size = ft_list_size(begin_list);
	i = 0;
	j = list_size - 1;
	while ((i != j) && (i != list_size / 2))
	{
		list = ft_list_at(begin_list, i);
		new_list = ft_list_at(begin_list, j);
		ft_swap(&list, &new_list);
		i++;
		j--;
	}
}
