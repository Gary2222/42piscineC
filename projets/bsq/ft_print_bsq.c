/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bsq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 20:06:32 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/12 01:10:09 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_bsq(t_square *bsq, char **map, char *c)
{
	int i;
	int j;

	i = 0;
	while (i < bsq->size)
	{
		j = 0;
		while (j < bsq->size)
		{
			map[bsq->y][bsq->x] = c[2];
			bsq->x++;
			j++;
		}
		bsq->x = bsq->x - j;
		bsq->y++;
		i++;
	}
	i = 0;
	while (map[i] != '\0')
	{
		ft_putstr(map[i]);
		ft_putstr("\n");
		i++;
	}
	free(map);
}
