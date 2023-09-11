# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 15:48:20 by tstrassb          #+#    #+#              #
#    Updated: 2023/09/11 16:08:39 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

OBJ_DIR	=	.objectFiles

SRCS	=	Harl main

SRC		=	$(SRCS:=.cpp)
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRCS:=.o))

HEADERS	=	Harl.hpp

#Colors:
GREEN	=	\e[92;5;118m
YELLOW	=	\e[93;5;226m
GREY	=	\e[33;2;37m
RESET	=	\e[0m

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ) $(HEADERS)
			@$(CC) $(OBJ) -o $(NAME)
			@printf	"$(GREEN)- $(NAME) ready!\n$(RESET)"

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
				@mkdir -p $(dir $@)
				@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJ_DIR) $(OBJ)
			@printf "$(GREY)- Object files cleaned!\n$(RESET)"

fclean:		clean
			@$(RM) $(NAME)
			@printf "$(YELLOW)- $(NAME) cleaned!\n$(RESET)"

re:			fclean all