/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 02:06:38 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/22 00:21:18 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct				s_list
{
	struct s_list			*next;
	char					*data;
}							t_list;

t_list						*ft_create_elem(void *data);
#endif
