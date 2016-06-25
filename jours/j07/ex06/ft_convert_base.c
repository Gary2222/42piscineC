/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 19:26:40 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/11/06 21:53:30 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		ft_val(char *nbr, char *base_from)
{
	int	n;
	int	i;
	int	j;

	n = 0;
	i = 0;
	while (nbr[i])
	{
		j = 0;
		while (base_from[j])
		{
			if (nbr[i] == base_from[j])
				n = (n * ft_strlen(base_from)) + j;
			j++;
		}
		i++;
	}
	return (n);
}

int		ft_val_j(int value, int len)
{
	int j;

	j = 0;
	while (value > 0)
	{
		value = value / len;
		j++;
	}
	return (j);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		value;
	int		len;
	int		i;
	int		j;

	value = ft_val(nbr, base_from);
	len = ft_strlen(base_to);
	j = ft_val_j(value, len);
	res = (char*)malloc(sizeof(char) * (j + 1));
	i = 0;
	if (value)
		while (value > 0)
		{
			res[--j] = base_to[value % len];
			value = value / len;
			i++;
		}
	else
	{
		res[i] = base_to[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
