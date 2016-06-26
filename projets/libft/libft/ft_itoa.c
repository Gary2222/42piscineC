/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 21:27:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/12 23:11:12 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_intlen(int nbr)
{
	int len;

	len = 0;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int i;

	str = (char *)malloc(sizeof(char) * ft_intlen(nbr) + 1);
	i = ft_intlen(nbr);
	str[i] = '\0';
	i--;
	while (nbr >= 10)
	{
		str[i] = (nbr % 10) + 48;
		nbr = (nbr / 10);
		i--;
	}
	str[i] = nbr + 48;
	return (str);
}
