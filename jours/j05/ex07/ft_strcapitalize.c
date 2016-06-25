/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 01:38:14 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/29 17:01:21 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str);

char		*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] < 48)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

char		*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
