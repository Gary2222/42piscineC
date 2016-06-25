/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 16:10:40 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/10/25 18:03:44 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int n);
int		test_n(int n);
void	ft_print_out(void);

void	ft_putnbr(int n)
{
	char	tab[11];
	int		count;
	int		number;

	n = test_n(n);
	if (n > -2147483648)
	{
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
	else if (n == -2147483648)
		ft_print_out();
}

int		test_n(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
		ft_putchar('0');
	return (n);
}

void	ft_print_out(void)
{
	ft_putchar(50);
	ft_putchar(49);
	ft_putchar(52);
	ft_putchar(55);
	ft_putchar(52);
	ft_putchar(56);
	ft_putchar(51);
	ft_putchar(54);
	ft_putchar(52);
	ft_putchar(56);
}
