/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 16:01:56 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/12/30 16:07:51 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
