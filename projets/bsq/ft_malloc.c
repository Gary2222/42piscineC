/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 21:43:21 by mguyout           #+#    #+#             */
/*   Updated: 2016/06/11 00:40:37 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_malloc(char *str, char *file, int i)
{
	char	buf[1 + 1];
	int		fd;

	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1) && *buf != '\n')
		i++;
	str = (char*)malloc(sizeof(char*) * i + 1);
	return (str);
}
