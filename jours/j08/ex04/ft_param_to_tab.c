/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 20:40:27 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/12/22 23:29:51 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(sizeof(*cpy) * ft_strlen(src) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*data_param;

	data_param = (t_stock_par*)malloc(sizeof(t_stock_par) * ac + 1);
	if (data_param == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		(data_param + i)->size_param = ft_strlen(av[i]);
		(data_param + i)->str = av[i];
		(data_param + i)->copy = ft_strdup(av[i]);
		(data_param + i)->tab = ft_split_whitespaces(av[i]);
		i++;
	}
	(data_param + i)->str = 0;
	return (data_param);
}
