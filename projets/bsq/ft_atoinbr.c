/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:45:34 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/14 22:32:53 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_atoinbr(char *str)
{
	int i;
	int nb;
	int neg;
	int	x;

	x = 0;
	i = 0;
	nb = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[x])
		x++;
	while (str[i] >= '0' && str[i] <= '9' && i < x - 3)
	{
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	return (neg == 1) ? -nb : nb;
}
