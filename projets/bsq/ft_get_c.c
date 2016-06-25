/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/12 01:29:44 by mguyout           #+#    #+#             */
/*   Updated: 2016/06/12 23:28:03 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_get_c(char *file, int i)
{
	char	buf[1 + 1];
	int		fd;
	char	*str;
	char	*c;

	i = 0;
	str = (char*)malloc(sizeof(char*) * 15 + 1);
	c = (char*)malloc(sizeof(char*) * 3 + 1);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, &buf, 1) && *buf != '\n')
	{
		str[i] = *buf;
		i++;
	}
	str[i] = '\0';
	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	c[2] = str[i];
	c[1] = str[i - 1];
	c[0] = str[i - 2];
	return (c);
}
