# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sako <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 11:39:08 by sako              #+#    #+#              #
#    Updated: 2019/04/11 22:39:23 by sako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC = srcs/ft_tail.c srcs/main.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_atoi.c
OBJECTS = ft_tail.o main.o ft_putchar.o ft_putstr.o ft_atoi.o
INCLUDES = includes

$(NAME):
	gcc -o $(NAME) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC)

all: $(NAME) clean

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
