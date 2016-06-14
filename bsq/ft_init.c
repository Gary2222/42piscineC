/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 18:51:27 by mguyout           #+#    #+#             */
/*   Updated: 2016/06/13 00:39:24 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	**ft_init(char *file)
{
	int		i;
	char	**tab;
	char	*tabfile;

	i = 0;
	tabfile = NULL;
	tabfile = ft_init_core(i, file, tabfile);
	tab = ft_split_whitespaces(tabfile);
	free(tabfile);
	return (tab);
}
