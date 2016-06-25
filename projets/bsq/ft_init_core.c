/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_core.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/03 23:25:59 by mguyout           #+#    #+#             */
/*   Updated: 2016/06/12 00:15:27 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_del_first_line(char *file)
{
	char	buf[1 + 1];
	int		fd;
	int		x;
	int		i;

	x = 0;
	i = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1) && x == 0)
	{
		if (*buf == '\n' && x == 0)
			x = i + 1;
		i++;
	}
	return (x);
}

char		*ft_init_core(int i, char *file, char *tabfile)
{
	char	buf[1 + 1];
	int		x;
	int		fd;

	x = ft_del_first_line(file);
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1))
		i++;
	tabfile = (char*)malloc(sizeof(char*) * i - x + 1);
	fd = open(file, O_RDONLY);
	i = 0;
	while (read(fd, &buf, 1))
	{
		if (x == 0)
		{
			tabfile[i] = *buf;
			i++;
		}
		else
			x--;
	}
	return (tabfile);
}
