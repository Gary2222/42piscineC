/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core_lenl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 22:09:47 by mguyout           #+#    #+#             */
/*   Updated: 2016/06/11 00:40:44 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_core_lenl(char *file, int tmp, int len)
{
	int		x;
	int		fd;
	char	buf[1 + 1];

	x = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (tmp != 0)
			tmp--;
		else
		{
			if (*buf == '\n')
			{
				if (x == len)
					x = -1;
				else
					return (0);
			}
			x++;
		}
	}
	return (1);
}
