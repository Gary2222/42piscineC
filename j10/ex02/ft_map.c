/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 20:33:54 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/01/02 21:20:22 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *return_tab;

	i = 0;
	if ((return_tab = malloc(sizeof(*return_tab) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		return_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (return_tab);
}
