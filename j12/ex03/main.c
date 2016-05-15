/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 18:39:59 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/15 21:26:40 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			main(int argc, char **argv)
{
	int		i;
	int		j;
	int		fd;
	char	buf;

	if (argc < 2)
	{
		while (read(0, &buf, 1))
			write(1, &buf, 1);
	}
	i = 1;
	while (i <= argc - 1)
	{
		fd = open(argv[i], O_RDONLY);
		ft_error(fd, argv, i);
		j = i;
		ft_init(argv, fd, j);
		close(fd);
		i++;
	}
	return (0);
}
