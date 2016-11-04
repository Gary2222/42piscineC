/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:51:35 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/03 22:41:57 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	
	if (lst == NULL)
		return (NULL);
	new = ft_lstnew(lst->content, lst->content_size);
	while (lst != NULL)
		ft_lstadd(&new, f(lst));
	return (new);
}
