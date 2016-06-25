/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 17:05:50 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/11/02 11:46:22 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(char *a, char *b);
void	ft_sort(int argc, char **argv);

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort(argc, argv);
	if (argc >= 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		test;
	char	*c;

	test = 1;
	i = 1;
	while (test == 1)
	{
		test = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				c = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = c;
				test = 1;
			}
			i++;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
