/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 04:45:57 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/26 17:39:22 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(char *a, char *b);
int			ft_strlen(char *str);

char		*ft_strrev(char *str)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		ft_swap(&str[i], &str[j]);
		i++;
		j--;
	}
	return (str);
}

void		ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
