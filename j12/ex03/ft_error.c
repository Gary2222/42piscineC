/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 18:43:09 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/13 00:22:30 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_error(int fd, char **argv, int i)
{
	if (fd < 0)
	{
		ft_putstr("hexdump: ");
		ft_putstr(argv[i]);
		ft_putstr(": No such file or directory\n");
		if (argv[++i] == NULL)
		{
			ft_putstr("hexdump: ");
			ft_putstr(argv[--i]);
			ft_putstr(": Bad file descriptor\n");
		}
	}
}
