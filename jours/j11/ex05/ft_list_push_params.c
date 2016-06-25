/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 00:10:20 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/22 12:35:02 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list		*new;

	new = ft_create_elem(data);
	if ((*begin_list))
		new->next = *begin_list;
	*begin_list = new;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*arg;

	arg = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&arg, av[i]);
		i++;
	}
	return (arg);
}
