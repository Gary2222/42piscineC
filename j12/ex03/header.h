/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 19:53:21 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/05/14 21:57:15 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFSIZE 16
# define C "-C"
# define HEXA "0123456789abcdef"
# define DECIMAL "0123456789"

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
void	ft_error(int fd, char **argv, int i);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_init(char **argv);
void	ft_hexdump(int fd, int i, int count, char *buf);
char	*ft_itoa(int nbr);
void	ft_print_count(char *count);
void	ft_print_octet(char *octet);
void	ft_convert_hexa(char *buffer);
#endif
