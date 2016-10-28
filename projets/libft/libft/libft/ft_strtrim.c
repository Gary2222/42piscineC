/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 23:20:40 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/27 23:40:22 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[ft_strlen(s) - (j - 1)] == ' ' || s[ft_strlen(s) - (j - 1)] == '\n'
			|| s[ft_strlen(s) - (j - 1)] == '\t')
		j++;
	return (ft_strsub(i, ft_strlen(s) - (i + j)));
}
