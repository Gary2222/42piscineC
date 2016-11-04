/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 16:33:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/01 17:20:25 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strstr(const char *big, const char *little)
{
	unsigned long		i;

	i = 0;
	if (!little)
		return ((char *)big);
	if (!big)
		return (NULL);
	while (big[i] == little[i])
	{
		if (i == ft_strlen(little))
			return ((char *)big);
		i++;
	}
	return (ft_strstr((char *)big + 1, little));
}
