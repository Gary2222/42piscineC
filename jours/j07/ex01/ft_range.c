/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 01:01:08 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/11/06 17:48:14 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab_int;
	int i;
	int j;

	if (min < max)
	{
		i = min;
		j = 1;
		while (i < max)
		{
			i++;
			j++;
		}
		tab_int = (int *)malloc(sizeof(int) * j);
		j = 0;
		while (min < max)
		{
			tab_int[j] = min;
			min++;
			j++;
		}
		return (tab_int);
	}
	else
		return (0);
}
