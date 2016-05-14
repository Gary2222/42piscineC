/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 17:46:07 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/22 19:17:38 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	int am_pm;

	am_pm = 0;
	if (hour >= 0 && hour <= 11)
		am_pm = 0;
	else if (hour == 12)
		am_pm = 1;
	else if (hour >= 13 && hour <= 24)
		am_pm = 2;
	hour = hour % 12;
	if (hour == 12)
		hour = 0;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (am_pm == 0)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	else if (am_pm == 1)
		printf("0.00 A.M. AND %d.00 P.M.\n", hour + 1);
	else if (am_pm == 2)
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, hour + 1);
}
