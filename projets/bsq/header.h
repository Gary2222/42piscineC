/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/25 20:46:14 by gjeanmai          #+#    #+#             */
/*   Updated: 2016/06/13 01:53:25 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define C ".ox"

typedef struct	s_square
{
	int			x;
	int			y;
	int			size;
}				t_square;

int				ft_atoi(char *str);
int				ft_atoinbr(char *str);
t_square		*ft_bsq(char **map, int nb_lines, char *c);
int				ft_check(t_square sqr, char *c, char **map, int nb_lines);
int				ft_check_nbrfl(char *str, int i);
int				ft_core_lenl(char *file, int tmp, int len);
char			*ft_get_c(char *file, int i);
int				ft_get_nb_lines(char *file);
t_square		*ft_init_square(t_square *sqr);
char			**ft_init(char *file);
char			*ft_init_core(int i, char *file, char *tabfile);
char			*ft_malloc(char *str, char *file, int i);
int				ft_map_error(char *file, char *c);
void			ft_print_bsq(t_square *bsq, char **map, char *c);
void			ft_stdin(char **map, t_square *bsq, char *c, int i);
char			*ft_strdel(char *as, int i);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
char			**ft_split_whitespaces(char *str);

#endif
