/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 14:23:36 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/28 14:33:53 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{
	char *str = "lol *mdr*   paff * hiiii***** puis***     *   ***";
	char **str2;
	int  i;

	str2 = ft_strsplit(str, '*');
	i = 0;
	while (str2[i])
	{
		printf("%s\n", str2[i]);
		i++;
	}
	return (0);
}
