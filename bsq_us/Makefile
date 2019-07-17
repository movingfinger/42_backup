# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sako <sako@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/15 13:39:40 by sako              #+#    #+#              #
#    Updated: 2019/04/17 23:05:44 by sako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = srcs/ft_print.c srcs/main.c srcs/ft_map.c srcs/ft_string.c srcs/ft_map_search.c srcs/ft_atoi.c srcs/ft_check_error.c
OBJECTS = ft_print.o main.o ft_string.o ft_map_search.o ft_atoi.o ft_check_error.o
INCLUDES = includes

$(NAME):
	gcc -o $(NAME) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC)

all: $(NAME) clean

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
