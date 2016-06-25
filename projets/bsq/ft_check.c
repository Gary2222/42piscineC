/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/29 00:01:58 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/13 01:37:16 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int					ft_line_len(t_square sqr, char **map, int i, char *c)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (map[sqr.y][sqr.x - j] == c[0])
			j++;
		else
			j = i + 1;
	}
	return (j == i) ? 1 : 0;
}

int					ft_column_len(t_square sqr, char **map, int i, char *c)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (map[sqr.y - j][sqr.x] == c[0])
			j++;
		else
			j = i + 1;
	}
	return (j == i) ? 1 : 0;
}

int					ft_check(t_square sqr, char *c, char **map, int nb_l)
{
	int				i;

	i = 0;
	while (ft_line_len(sqr, map, i + 1, c) && ft_column_len(sqr, map, i + 1, c)
			&& sqr.y < nb_l && map[sqr.y][sqr.x] == c[0])
	{
		sqr.x++;
		sqr.y++;
		i++;
		if (sqr.y == nb_l)
			return (i);
	}
	return (i);
}
