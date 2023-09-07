# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 14:49:04 by tstrassb          #+#    #+#              #
#    Updated: 2023/09/07 15:07:04 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombieHorde

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

OBJ_DIR	=	.objectFiles

SRCS	=	main Zombie zombieHorde

SRC		=	$(SRCS:=.cpp)
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRCS:=.o))
HEADER	=	Zombie.hpp

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GREY		=	\e[33;2;37m
RESET		=	\e[0m

.PHONY:			all clean fclean re

all:			$(NAME)

$(NAME):		$(OBJ) $(HEADER)
				@$(CC) $(OBJ) -o $(NAME)
				@printf "$(GREEN)- $(NAME) is ready.\n$(RESET)"

$(OBJ_DIR)/%.o:	%.cpp $(HEADER)
				@mkdir -p $(dir $@)
				@$(CC) $(CFLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJ_DIR) $(OBJ)
				@printf "$(GREY)-Object files cleaned!\n$(RESET)"

fclean:			clean
				@$(RM) $(NAME)
				@printf "$(YELLOW)-$(NAME) cleaned!\n$(RESET)"

re:				fclean all