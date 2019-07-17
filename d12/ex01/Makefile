# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sako <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 11:39:08 by sako              #+#    #+#              #
#    Updated: 2019/04/11 21:31:14 by sako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = srcs/ft_cat.c srcs/main.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c
OBJECTS = ft_cat.o main.o ft_putchar.o ft_putstr.o ft_strcmp.o
INCLUDES = includes

$(NAME):
	gcc -o $(NAME) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC)

all: $(NAME) clean

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
