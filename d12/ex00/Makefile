# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sako <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 11:39:08 by sako              #+#    #+#              #
#    Updated: 2019/04/11 15:47:27 by sako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = srcs/ft_display_file.c srcs/main.c
OBJECTS = ft_display_file.o main.o
INCLUDES = includes

$(NAME):
	gcc -o $(NAME) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC)

all: $(NAME) clean

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)
