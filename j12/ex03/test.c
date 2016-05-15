/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 22:16:07 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/15 22:26:28 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	int		fd;

	fd = open("42", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR);
	ft_putstr_fd(fd, "lolipop");
	return (0);
}
