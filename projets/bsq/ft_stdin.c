/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 21:44:25 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/15 00:08:16 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_stdin(char **map, t_square *bsq, char *c, int i)
{
	char	buf[1 + 1];
	int		fd;

	fd = open("stdin.tmp", O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	while (read(0, &buf, 1))
		write(fd, buf, 1);
	c = ft_get_c("stdin.tmp", i);
	if (ft_map_error("stdin.tmp", c) == 1)
	{
		map = ft_init("stdin.tmp");
		ft_putstr("");
		bsq = ft_bsq(map, ft_get_nb_lines("stdin.tmp"), c);
		ft_print_bsq(bsq, map, c);
	}
}
