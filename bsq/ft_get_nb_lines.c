/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 01:34:47 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/15 00:06:42 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_get_nb_lines(char *file)
{
	char	str[15];
	char	buf[1 + 1];
	int		fd;
	int		j;

	j = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &buf, 1) && *buf != '\n')
	{
		str[j] = *buf;
		j++;
	}
	if (ft_check_nbrfl(str, j) == 1)
		return (ft_atoinbr(str));
	return (ft_atoi(str));
}
