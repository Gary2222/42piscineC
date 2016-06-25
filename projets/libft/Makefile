NAME = libft.a

CC = gcc
FLAGS = -Wextra -Wall -Werror -g -O0

INCLUDES = ./includes
FT_SRC_DIR = ./libft

FT_COMPILED = ft_bzero.o \
			  ft_itoa.o \
			  ft_memalloc.o \
			  ft_memdel.o \
			  ft_putchar.o \
			  ft_putchar_fd.o \
			  ft_putstr.o \
			  ft_putstr_fd.o \
			  ft_strclr.o \
			  ft_strcmp.o \
			  ft_strcpy.o \
			  ft_strdel.o \
			  ft_strdup.o \
			  ft_strequ.o \
			  ft_striter.o \
			  ft_striteri.o \
			  ft_strlen.o \
			  ft_strmap.o \
			  ft_strmapi.o \
			  ft_strncat.o \
			  ft_strncpy.o \
			  ft_strnequ.o \
			  ft_strnew.o \
			  ft_strsub.o \

COMPILED = $(FT_COMPILED) \

all : $(NAME)

$(NAME): $(COMPILED)
	@ar rc $(NAME) $(COMPILED)
	@ranlib $(NAME)
	@echo "Made" $(NAME)

$(FT_COMPILED): %.o: $(FT_SRC_DIR)/%.c
	@$(CC) -c $(FLAGS) -I $(INCLUDES) $< -o $@

clean:
	@-/bin/rm -f $(COMPILED)
	@echo "cleaned" $(NAME)

fclean: clean
	@-/bin/rm -f $(NAME)
	@echo "fcleaned" $(NAME)

re: fclean all
