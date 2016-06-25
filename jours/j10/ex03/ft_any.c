/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 15:21:01 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/12/30 16:01:18 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}