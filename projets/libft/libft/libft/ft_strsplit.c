/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 00:55:04 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/28 14:42:51 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int      ft_nb_words(char const *s, char c)
{
	int         i;
	int         j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int      ft_wordlen(char const *s, char c)
{
	int         i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char            **ft_strsplit(char const *s, char c)
{
	int         i;
	int         j;
	char        **str;

	i = 0;
	j = 0;
	str = ft_strnew(ft_nb_words(s, c) + 1);
	while (s[i])
		{
		if (ft_wordlen(s[i], c) >= 1)
		{
			i = i + ft_wordlen(s[i], c);
 			str[j] = ft_strsub(s, i, ft_wordlen(s[i], c));
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str)
}
