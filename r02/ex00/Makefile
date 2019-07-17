# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sako <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/13 17:20:43 by sako              #+#    #+#              #
#    Updated: 2019/04/14 18:11:57 by sako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_RUSH20 = colle-2
NAME_RUSH00 = colle-00
NAME_RUSH01 = colle-01
NAME_RUSH02 = colle-02
NAME_RUSH03 = colle-03
NAME_RUSH04 = colle-04

SRC = srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_putnbr.c srcs/ft_strcmp.c srcs/store.c srcs/ft_delay.c
SRC_RUSH = srcs/rush0{0,1,2,3,4}.c
INCLUDES = includes
OBJECTS = *.o

$(NAME_RUSH20):
	gcc -o $(NAME_RUSH20) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC) $(SRC_RUSH) srcs/main.c
	gcc -o $(NAME_RUSH00) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC) srcs/rush00.c srcs/main_rush00.c
	gcc -o $(NAME_RUSH01) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC) srcs/rush01.c srcs/main_rush01.c
	gcc -o $(NAME_RUSH02) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC) srcs/rush02.c srcs/main_rush02.c
	gcc -o $(NAME_RUSH03) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC) srcs/rush03.c srcs/main_rush03.c
	gcc -o $(NAME_RUSH04) -I$(INCLUDES) -Wall -Wextra -Werror $(SRC) srcs/rush04.c srcs/main_rush04.c

all: $(NAME_RUSH20) clean

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME_RUSH20) $(NAME_RUSH00) $(NAME_RUSH01) $(NAME_RUSH02) $(NAME_RUSH03) $(NAME_RUSH04)
