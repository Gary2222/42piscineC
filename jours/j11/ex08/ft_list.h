/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 02:06:38 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/22 12:43:06 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct				s_list
{
	struct s_list			*next;
	void					*data;
}							t_list;

t_list						*ft_create_elem(void *data);
#endif
