/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:10:18 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/11/28 00:26:18 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_set_n_print_tab(int *num, int size_tab);
void	ft_print_int_tab(int *num, int size_tab);
int		ft_trans_n(int n);

void	ft_print_combn(int n)
{
	int		num[n];
	int		i;
	int		j;

	i = 0;
	j = n;
	while (j - 1 >= 0 && j - 1 <= 9)
	{
		num[j - 1] = i;
		i++;
		j--;
	}
	ft_set_n_print_tab(num, n);
}

void	ft_set_n_print_tab(int *num, int size_tab)
{
	int i;

	while (num[size_tab - 1] <= ft_trans_n(size_tab) && size_tab > 0)
	{
		i = 0;
		while (num[i] != ft_trans_n(i))
		{
			ft_print_int_tab(num, size_tab);
			num[i]++;
		}
		while (num[i] == ft_trans_n(i) && size_tab > 1)
			i++;
		num[i]++;
		while (i > 0 && size_tab > 1)
		{
			i--;
			num[i] = num[i + 1] + 1;
		}
	}
}

void	ft_print_int_tab(int *num, int size_tab)
{
	int i;

	i = size_tab;
	while (i - 1 >= 0)
	{
		ft_putchar(48 + num[i - 1]);
		i--;
	}
	if (num[size_tab - 1] != ft_trans_n(size_tab))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int		ft_trans_n(int n)
{
	if (n == 10)
		n = 0;
	else if (n == 9)
		n = 1;
	else if (n == 8)
		n = 2;
	else if (n == 7)
		n = 3;
	else if (n == 6)
		n = 4;
	else if (n == 5)
		n = 5;
	else if (n == 4)
		n = 6;
	else if (n == 3)
		n = 7;
	else if (n == 2)
		n = 8;
	else if (n == 1)
		n = 9;
	else if (n == 0)
		n = 10;
	return (n);
}
