# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abourenn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/06 03:29:44 by abourenn          #+#    #+#              #
#    Updated: 2019/06/06 03:38:27 by abourenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fdf

LIB		=	libft/

SRC		=	main.c \

OBJ	= $(SRC:.c=.o)

FLAGS = -Wall\
		-Wextra\
		-Werror\

HEADER = includes\

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIB)libft
	gcc $(FLAGS) $^ -o $(NAME) -I $(HEADER) $(LIB)libft/libft.a

%.o:%.c
	gcc $(FLAGS) -o $@ -c $^ -I $(HEADER)

clean:
	/bin/rm -rf $(OBJ)
	make -C $(LIB) clean

fclean: clean
	/bin/rm -rf $(NAME)
	/bin/rm -rf $(LIB)libft.a

re: fclean all
