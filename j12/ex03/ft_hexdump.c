/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_without.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 19:30:19 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/13 18:58:58 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

// der

void		ft_hexdump(char **argv)
{
	int		fd;
	int		i;
	int		count;
	char	buf[BUFSIZE + 1];

	i = 1;
	count = 0;
	fd = open(argv[i], O_RDONLY);
//	printf("nous allons entrer dans le while\n");
	while (read(fd, buf, BUFSIZE))
	{
//		printf("While...\n");
		i = 0;
//		printf("appel de ft_print_count\n");
		ft_print_count(ft_itoa(count));
//		printf("fin de ft_print_count\n");
		while (i < BUFSIZE)
		{
			if (buf[i] != '\0')
			{
//				printf("appel de ft_print_octet\n");
				ft_print_octet(&buf[i]);
				count++;
			}
			else
				ft_putstr("   ");
			i++;
		}
		ft_putchar('\n');
	}
}
