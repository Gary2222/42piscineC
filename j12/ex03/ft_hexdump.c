/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_without.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 19:30:19 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/15 18:02:04 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		ft_init(char **argv)
{
	int		fd;
	int		i;
	int		count;
	char	buf[BUFSIZE + 1];

	i = 1;
	count = 0;
	fd = open(argv[i], O_RDONLY);
	while (i - 1 <= 16)
	{
		buf[i - 1] = '\0';
		i++;
	}
	ft_hexdump(fd, i, count, buf);
}

void		ft_hexdump(int fd, int i, int count, char *buf)
{
	while (read(fd, buf, BUFSIZE))
	{
		i = 0;
		ft_print_count(ft_itoa(count));
		while (i < BUFSIZE)
		{
			if (buf[i])
			{
				ft_print_octet(&buf[i]);
				buf[i] = '\0';
				count++;
			}
			else
				ft_putstr("   ");
			i++;
		}
		ft_putchar('\n');
	}
	ft_print_count(ft_itoa(count));
	ft_putchar ('\n');
}
