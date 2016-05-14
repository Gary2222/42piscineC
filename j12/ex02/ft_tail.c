/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 22:07:16 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/10 20:00:45 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int				ft_atoi(char *str)
{
	int			i;
	int			nb;
	int			neg;

	i = 0;
	nb = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	if (neg == 1)
		return (-nb);
	return (nb);
}

void			print_names(int i, int argc, char **argv)
{
	int			j;

	j = 0;
	if (argc > 4)
	{
		if (i > 3)
			write(1, "\n==> ", 5);
		else
			write(1, "==> ", 4);
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, " <==\n", 5);
	}
}

int				size_file(int i, char **argv)
{
	int			fd;
	int			size;
	int			buffer;

	size = 0;
	fd = open(argv[i], O_RDONLY);
	while (read(fd, &buffer, 1))
		size++;
	close(fd);
	return (size);
}

void			disp_files(int i, int fd, int argc, char **argv)
{
	char		buffer;
	int			offset;
	int			readed;
	int			size;

	size = size_file(i, argv);
	readed = 0;
	offset = ft_atoi(argv[2]);
	print_names(i, argc, argv);
	while (readed < (size - offset))
		readed += read(fd, &buffer, 1);
	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}

int				main(int argc, char **argv)
{
	int			fd;
	int			i;
	int			j;

	i = 3;
	if (argc < 4)
		return (0);
	while (i < argc)
	{
		j = -1;
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
			disp_files(i, fd, argc, argv);
		else
		{
			write(2, "ft_tail: ", 9);
			while (argv[i][++j])
				write(2, &argv[i][j], 1);
			write(2, ": No such file or directory\n", 28);
		}
		close(fd);
		i++;
	}
	return (0);
}
