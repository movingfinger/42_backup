# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sako <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 20:50:59 by sako              #+#    #+#              #
#    Updated: 2019/04/11 11:56:56 by sako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = ft_atoi.c ft_do_op.c ft_putnbr.c ft_operators.c main.c

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

all:	$(NAME) clean

clean:
	/bin/rm -f $(NAME)

re: $(NAME) all clean
