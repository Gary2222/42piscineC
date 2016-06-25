/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 21:14:14 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/19 22:16:12 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		(*g_f[5])(int, int) = {add, sub, mul, div, mod};

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_match_operator(char *str)
{
	int		i;
	char	operator[6];

	i = 0;
	ft_strcpy(operator, "+-*/%");
	while (operator[i])
	{
		if (operator[i] == str[0])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_check_cond(int nb2, int operator)
{
	if (operator < 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	if (nb2 == 0 && operator >= 3)
	{
		if (operator == 3)
			ft_putstr("Stop : division by zero\n");
		if (operator == 4)
			ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int nb1;
	int nb2;
	int operator;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	operator = ft_match_operator(argv[2]);
	if (ft_check_cond(nb2, operator))
	{
		ft_putnbr((long)(*g_f[operator])(nb1, nb2));
		ft_putchar('\n');
	}
	return (0);
}
