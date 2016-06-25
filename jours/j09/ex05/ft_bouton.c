/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 22:06:09 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/22 22:32:09 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_bouton(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	else if ((j < i && j > k) || (j > i && j < k))
		return (j);
	else if ((k < i && k > j) || (k > i && k < j))
		return (k);
	else
		return (0);
}
