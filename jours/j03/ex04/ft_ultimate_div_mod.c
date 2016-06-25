/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 19:02:33 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/26 17:27:36 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int quotient;
	int reste;

	quotient = *a / *b;
	reste = *a % *b;
	*a = quotient;
	*b = reste;
}
