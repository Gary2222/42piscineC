/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 21:09:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/10/26 21:09:26 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;

	j = 0;
	if (ft_strlen(s) < start || !s)
		return (NULL);
	if (!(new = (char*)malloc(len + 1)))
		return (NULL);
	while (j < len && s[start])
		new[j++] = s[start++];
	new[j] = '\0';
	return (new);
}
