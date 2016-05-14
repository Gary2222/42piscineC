/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:14:34 by gjeanmai          #+#    #+#             */
/*   Updated: 2015/12/22 23:34:16 by gjeanmai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN(nbr)       (nbr % 2 == 0)
# define TRUE            1
# define FALSE           0
# define EVEN_MSG        "I have an even number of arguments.\n"
# define ODD_MSG         "I have an odd number of arguments.\n"
# define SUCCESS         0

typedef int			t_bool;
#endif
