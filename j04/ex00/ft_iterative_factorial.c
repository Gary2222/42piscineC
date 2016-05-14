/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 16:39:14 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/28 10:37:11 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	i = nb - 1;
	while (i >= 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
