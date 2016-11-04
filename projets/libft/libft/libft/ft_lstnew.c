/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:51:25 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/03 15:36:12 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	lst->content = (void*)content;
	lst->content_size = content_size;
	if (content == NULL)
		lst->content_size = 0;
	lst->next = (NULL);
	return (lst);
}
