/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 21:42:31 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/15 22:36:27 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_create_tmp(int argc, char **argv)
{
	int		i;
	int		fd;
	int		fd_tmp;
	char	buf[BUFSIZE];

	i = 1;
	fd_tmp = open("tmp_file.tmp", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR);
	if (fd_tmp == -1)
		return (-1);
	while (i <= argc)
	{
		fd = open(argv[i], O_RDONLY);
		ft_error(fd, argv, i);
		while (read(fd, buf, BUFSIZE))
			ft_putstr_fd(fd_tmp, buf);
		i++;
	}
	return (fd_tmp);
}
