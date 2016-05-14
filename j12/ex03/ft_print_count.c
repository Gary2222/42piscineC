/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 23:16:16 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/13 18:47:36 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			ft_print_count(char *count)
{
	int		i;
	int		j;
	int		size;
	char	zeros[8];
	char	*hexcount;

	i = 0;
	j = 0;
//	printf("ft_print_count...\n");
	while (i < 7)
	{
		zeros[i] = ('0');
		i++;
	}
	zeros[i] = '\0';
//	printf("on va mettre la longueur de count dans size\n");
	size = ft_strlen(ft_convert_base(count, DECIMAL, HEXA));
	hexcount = (char*)malloc(sizeof(char*) * size + 1);
	hexcount = ft_convert_base(count, DECIMAL, HEXA);
//	printf("%d\n", ft_strlen(zeros));
	i = ft_strlen(zeros) - ft_strlen(hexcount);
//	printf("on va entrer dans le while\n");
	while (j < i)
	{
//		printf("%d\n", j);
		ft_putchar(zeros[j]);
		j++;
	}
//	printf("On sors du while\n");
	ft_putstr(hexcount);
}
