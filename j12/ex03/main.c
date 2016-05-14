/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 18:39:59 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/13 03:05:30 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"



int			main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	buf;

	if (argc < 2)
	{
		while (read(0, &buf, 1))
			write(1, &buf, 1);
	}
	i = 1;
	fd = open(argv[i], O_RDONLY);
	if (open(argv[i], O_RDONLY) < 0 && argv[2] == NULL)
		ft_error(fd, argv, i);
	else if (ft_strcmp(argv[1], C) != 0 && open(argv[i], O_RDONLY) >= 0)
		ft_hexdump(argv);
	return (0);
}
