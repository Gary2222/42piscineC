/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 22:04:14 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/13 01:36:55 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_square			*ft_bsq(char **map, int nb_lines, char *c)
{
	t_square		*sqr;
	t_square		*tmp;

	sqr = NULL;
	tmp = NULL;
	sqr = ft_init_square(sqr);
	tmp = ft_init_square(tmp);
	while (tmp->y < nb_lines - sqr->size)
	{
		while (tmp->x < ft_strlen(map[tmp->y]) - sqr->size)
		{
			if (map[tmp->y][tmp->x] == c[0])
			{
				tmp->size = ft_check(*tmp, c, map, nb_lines);
				if (tmp->size > sqr->size)
					*sqr = *tmp;
			}
			tmp->x++;
		}
		tmp->x = 0;
		tmp->y++;
	}
	return (sqr);
}
