/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 23:51:04 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/01 23:55:20 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_square			*ft_init_square(t_square *sqr)
{
	if ((sqr = (t_square*)malloc(sizeof(t_square*) + 1)) == NULL)
		return (NULL);
	sqr->x = 0;
	sqr->y = 0;
	sqr->size = 0;
	return (sqr);
}
