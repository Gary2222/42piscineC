/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/01 21:08:58 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/01/01 21:16:21 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		add(int a, int b)
{
	return (a + b);
}

int		sub(int a, int b)
{
	long result;

	result = a - b;
	return ((int)result);
}

int		mul(int a, int b)
{
	return (a * b);
}

int		div(int a, int b)
{
	return (a / b);
}

int		mod(int a, int b)
{
	return (a % b);
}
