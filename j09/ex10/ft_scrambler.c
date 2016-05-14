/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 03:13:52 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/23 03:51:10 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int swap_a;
	int swap_b;
	int swap_c;
	int swap_d;

	swap_a = ***a;
	swap_b = *b;
	swap_c = *******c;
	swap_d = ****d;
	*******c = swap_a;
	****d = swap_c;
	*b = swap_d;
	***a = swap_b;
}
