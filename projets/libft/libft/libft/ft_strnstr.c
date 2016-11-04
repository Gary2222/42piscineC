/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:33:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/02 18:08:00 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long i;

	i = 0;
	if (!little)
		return ((char *)big);
	if (!big || len <= 0)
		return (NULL);
	while (big[i] == little[i])
	{
		if (i == ft_strlen(little))
			return ((char *)big);
		i++;
	}
	return (ft_strnstr((char *)big + 1, little, len - 1));
}
