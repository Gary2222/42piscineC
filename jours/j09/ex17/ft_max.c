/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 09:42:54 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/23 11:01:12 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_max(int *tab, int lenght)
{
	int value_max;
	int i;

	value_max = 0;
	i = 0;
	while (i < lenght)
	{
		if (value_max < tab[i])
		{
			value_max = tab[i];
		}
		i++;
	}
	return (value_max);
}
