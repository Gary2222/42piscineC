# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjeanmai <gjeanmai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/17 20:48:56 by gjeanmai          #+#    #+#              #
#    Updated: 2016/05/17 21:14:56 by gjeanmai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump

CC = gcc

FLAG = -c -Wall -Werror -Wextra

SRC = *.c

OBJ = *.o

HDR = *.h

RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(FLAG) $(SRC) $(HDR)
	@$(CC) $(OBJ) -o $(NAME)
	@$(RM) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
