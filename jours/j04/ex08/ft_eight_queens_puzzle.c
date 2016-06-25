/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 20:29:26 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/02/21 20:53:35 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nb_win(int n)
{
	if (n == 92)
		return (n);
	return (ft_nb_win(n + 1));
}

int		ft_eight_queens_puzzle(void)
{
	int	nb_win;

	nb_win = 1;
	return (ft_nb_win(nb_win));
}
