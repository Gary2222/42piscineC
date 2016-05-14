/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 02:58:59 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/12/03 22:12:32 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		swap(int *tab, int a, int b);

void	ft_sort_integer_table(int *tab, int size)
{
	int left;
	int right;
	int finish;
	int separate;

	left = 0;
	right = size - 1;
	separate = tab[0];
	finish = 0;

	while (finish == 0)
	{
		while (left < separate)
			left++;
		while (right > separate)
			right--;

		if (left < right)
			swap(tab, tab[left], tab[right]);
		else
			finish = 1;
	}
}

void		swap(int *tab, int a, int b)
{
	int swap;

	swap = tab[a];
	tab[a] = tab[b];
	tab[b] = swap;
}
