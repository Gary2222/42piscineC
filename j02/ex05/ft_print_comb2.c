/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 00:53:24 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/25 17:55:18 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_print_comb2(void);
void	ft_putnbr(int n);
int		ft_test_n(int n);
void	ft_print_space(int a);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a <= 9)
				ft_putnbr(0);
			ft_putnbr(a);
			ft_putchar(' ');
			if (b <= 9)
				ft_putnbr(0);
			ft_putnbr(b);
			b++;
			ft_print_space(a);
		}
		a++;
		b = a + 1;
	}
}

void	ft_print_space(int a)
{
	if (a < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putnbr(int n)
{
	char	tab[11];
	int		count;
	int		number;

	n = ft_test_n(n);
	if (n == 0)
		ft_putchar('0');
	count = 0;
	while (n != 0)
	{
		number = n % 10 + 48;
		n /= 10;
		tab[count] = number;
		count++;
	}
	while (count != 0)
	{
		ft_putchar(tab[count - 1]);
		count--;
	}
}

int		ft_test_n(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	return (n);
}
