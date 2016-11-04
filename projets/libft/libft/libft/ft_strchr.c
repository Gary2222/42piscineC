/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:22:54 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/11/01 17:35:04 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	if (*s == '\0')
		return (NULL);
	if (*s == c)
		return ((char *)s);
	else
		return (ft_strchr((char *)s + 1, c));
}
