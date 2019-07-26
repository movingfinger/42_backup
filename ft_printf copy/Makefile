# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sako <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/13 23:05:35 by sako              #+#    #+#              #
#    Updated: 2019/07/24 23:18:46 by sako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf 

SRC_PATH = ./
SRCS +=	./libft/*.c
SRC_PRINTF = ft_printf.c\
			 ft_parameters.c
SRC_MAIN = main.c
SRC = $(addprefix $(SRC_PATH), $(SRCS)) 

LIBFT = libft/
HEAD = ./ft_printf.h
OBJ = *.o
FLAG = -Wall -Wextra -Werror
DEL = rm -rf

all: $(NAME)

$(NAME):
	@make -C $(LIBFT)
	@gcc -g $(FLAG) -o $(NAME) $(SRC_PRINTF) $(SRC_MAIN) -I$(HEAD) -I$(LIBFT) -L. libft/libft.a
	@echo "[=================]"
	@echo "|     succes !    |"
	@echo "|     libft.a     |"
	@echo "|   was summoned  |"
	@echo "[=================]"

clean:
	@$(DEL) $(OBJ)
	@make -C $(LIBFT) clean
	@echo "[=================]"
	@echo "|     succes !    |"
	@echo "|     XXXXX.o     |"
	@echo "|  was destroyed  |"
	@echo "[=================]"

fclean:	clean
	@$(DEL) $(NAME)
	@make -C $(LIBFT) fclean
	@echo "[=================]"
	@echo "|     succes !    |"
	@echo "|     libft.a     |"
	@echo "|  was destroyed  |"
	@echo "[=================]"

re: fclean all

debug:
	gcc -g -o $(NAME) $(SRC) -I $(HEAD)
