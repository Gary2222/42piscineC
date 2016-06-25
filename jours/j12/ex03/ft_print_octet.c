/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_octet.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 23:43:40 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/14 21:03:31 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_octet(char *octet)
{
	int ascii;

	ascii = (int)*octet;
	ft_putchar(' ');
	if (ascii <= 15)
		ft_putchar('0');
	ft_putstr(ft_convert_base(ft_itoa(ascii), DECIMAL, HEXA));
}
