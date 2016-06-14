/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 16:14:06 by mguyout           #+#    #+#             */
/*   Updated: 2016/06/14 22:33:51 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_check_fl(int fd, char *file, int i, char *c)
{
	char	buf[1 + 1];
	char	*str;

	str = NULL;
	str = ft_malloc(str, file, i);
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1) && *buf != '\n')
	{
		str[i] = *buf;
		i++;
	}
	i--;
	if (str[i] == c[2] && str[i - 1] == c[1] && str[i - 2] == c[0])
	{
		i = i - 3;
		while (i >= 0)
		{
			if (str[i] >= '0' && str[i] <= '9')
				i--;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}

int	ft_check_c(int fd, char *file, int i, char *c)
{
	char	buf[1 + 1];

	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1) && *buf != '\n')
		i++;
	if (i < 4)
		return (0);
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (i != 0)
			i--;
		else if (*buf != c[0] && *buf != c[1] && *buf != '\n')
			return (0);
	}
	return (1);
}

int	ft_check_nbrl(int fd, char *file, int i)
{
	char	buf[1 + 1];
	char	*str;
	int		x;

	x = -1;
	str = NULL;
	str = ft_malloc(str, file, i);
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1) && *buf != '\n')
	{
		str[i] = *buf;
		i++;
	}
	i--;
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (i != 0)
			i--;
		else if (*buf == '\n')
			x++;
	}
	if (ft_check_nbrfl(str, i) == 1)
		return (ft_atoinbr(str) != x) ? 0 : 1;
	return (ft_atoi(str) != x) ? 0 : 1;
}

int	ft_check_lenl(int fd, char *file, int x)
{
	char	buf[1 + 1];
	int		i;
	int		tmp;
	int		len;

	len = 0;
	tmp = 0;
	i = 1;
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1) && *buf != '\n')
		i++;
	tmp = i;
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (i != 0)
			i--;
		else
		{
			if (*buf == '\n' && len == 0)
				len = x;
			x++;
		}
	}
	return (ft_core_lenl(file, tmp, len) == 0) ? 0 : 1;
}

int	ft_map_error(char *file, char *c)
{
	int i;
	int x;
	int fd;

	x = 0;
	i = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	if (ft_check_fl(fd, file, i, c) == 0 || ft_check_lenl(fd, file, x) == 0)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	if (ft_check_c(fd, file, i, c) == 0 || ft_check_nbrl(fd, file, i) == 0)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	return (1);
}
