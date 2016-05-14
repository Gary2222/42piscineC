/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 17:48:06 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/11/06 18:24:34 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len_words(char *str, int i);
int		ft_str_count_words(char *str);

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**str_split;

	str_split = (char**)malloc(sizeof(char*) * ft_str_count_words(str) + 1);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		str_split[j] = (char*)malloc(sizeof(char) * ft_len_words(str, i) + 1);
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			while (str[i] != ' ' && str[i] != '\t'
				&& str[i] != '\n' && str[i] != '\0')
				str_split[j][k++] = str[i++];
			str_split[j][k] = '\0';
			j++;
		}
	}
	str_split[j] = 0;
	return (str_split);
}

int		ft_str_count_words(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			j++;
			while (str[i] != ' ' && str[i] != '\t'
					&& str[i] != '\n' && str[i] != '\0')
			{
				i++;
			}
		}
	}
	return (j);
}

int		ft_len_words(char *str, int i)
{
	int j;

	j = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}
