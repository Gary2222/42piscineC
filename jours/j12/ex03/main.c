/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/17 20:43:07 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/17 20:48:26 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			main(int ac, char **av)
{
	int		i;
	int		fd;
	char	buf;

	if (ac < 2)
	{
		while (read(0, &buf, 1))
			write(1, &buf, 1);
	}
	i = 1;
	fd = open(av[i], O_RDONLY);
	if (open(av[i], O_RDONLY) < 0 && !av[2])
		ft_error(fd, av, i);
	else if (ft_strcmp(av[1], C) == 0)
		ft_hexa_with_c(ac, av);
	else if (ft_strcmp(av[1], C) != 0 && open(av[i], O_RDONLY) >= 0)
		ft_hexa_without_c(ac, av);
	return (0);
}
