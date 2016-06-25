/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 18:29:28 by mguyout           #+#    #+#             */
/*   Updated: 2016/06/15 00:07:57 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int				main(int argc, char **argv)
{
	char		**map;
	char		*c;
	int			i;
	t_square	*bsq;

	bsq = NULL;
	map = NULL;
	c = NULL;
	i = 1;
	if (argc == 1)
		ft_stdin(map, bsq, c, i);
	while (i <= argc - 1)
	{
		c = ft_get_c(argv[i], i);
		if (ft_map_error(argv[i], c) == 1)
		{
			map = ft_init(argv[i]);
			ft_putstr("");
			bsq = ft_bsq(map, ft_get_nb_lines(argv[i]), c);
			ft_print_bsq(bsq, map, c);
		}
		i++;
	}
	return (0);
}
