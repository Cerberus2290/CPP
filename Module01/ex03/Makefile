# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 13:08:04 by tstrassb          #+#    #+#              #
#    Updated: 2023/09/08 08:02:03 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Violence

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

OBJ_DIR	=	.objectFiles

SRCS	=	HumanA HumanB main Weapon

SRC		=	$(SRCS:=.cpp)
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRCS:=.o))

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GREY		=	\e[33;2;37m
RESET		=	\e[0m

.PHONY:			all clean fclean re

all:			$(NAME)

$(NAME):		$(OBJ)
				@$(CC) $(OBJ) -o $(NAME)
				@printf "$(GREEN)- $(NAME) is ready.\n$(RESET)"

$(OBJ_DIR)/%.o:	%.cpp
				@mkdir -p $(dir $@)
				@$(CC) $(CFLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJ_DIR) $(OBJ)
				@printf "$(GREY)-Object files cleaned!\n$(RESET)"

fclean:			clean
				@$(RM) $(NAME)
				@printf "$(YELLOW)-$(NAME) cleaned!\n$(RESET)"

re:				fclean all