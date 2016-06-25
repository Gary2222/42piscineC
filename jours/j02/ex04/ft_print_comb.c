/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/19 19:45:37 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/25 18:02:45 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putmore(int a, int b, int c);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int nbs[3];

	nbs[0] = 0;
	nbs[1] = 1;
	nbs[2] = 2;
	while (nbs[0] <= 7)
	{
		while (nbs[1] <= 8)
		{
			while (nbs[2] <= 9)
			{
				ft_putmore(nbs[0], nbs[1], nbs[2]);
				nbs[2]++;
			}
			nbs[1]++;
			nbs[2] = nbs[1] + 1;
		}
		nbs[1] = nbs[0] + 1;
		nbs[0]++;
	}
}

void	ft_putmore(int a, int b, int c)
{
	ft_putchar(48 + a);
	ft_putchar(48 + b);
	ft_putchar(48 + c);
	if (a < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
