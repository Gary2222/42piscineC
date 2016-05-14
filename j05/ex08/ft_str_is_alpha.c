/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 03:08:45 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/29 15:39:05 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_alpha(char *str)
{
	int i;
	int alphabet;

	alphabet = 1;
	i = 0;
	if (str[0] == '\0')
		return (alphabet);
	while (str[i] != '\0' && alphabet == 1)
	{
		if (str[i] < 65)
			alphabet = 0;
		else if (str[i] > 90 && str[i] < 97)
			alphabet = 0;
		else if (str[i] > 122)
			alphabet = 0;
		i++;
	}
	return (alphabet);
}
