# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 08:09:39 by tstrassb          #+#    #+#              #
#    Updated: 2023/09/05 08:19:41 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Account

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

OBJ_DIR	=	.objectFiles

SRCS	=	Account tests
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRCS:=.o))
HEADER	=	Account.hpp

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GREY		=	\e[33;2;37m
RESET		=	\e[0m

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			@$(CC) $(OBJ) -o $(NAME)
			@printf "$(_SUCCESS) $(GREEN)- $(NAME) ready.\n$(RESET)"

$(OBJ_DIR)/%.o:		%.cpp $(HEADER)
					@mkdir -p $(dir $@)
					@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJ_DIR) $(OBJ)
			@printf "$(GREY)- Object files cleaned!$(RESET)\n"

fclean:		clean
			@$(RM) $(NAME)
			@printf "$(YELLOW)- $(NAME) cleaned!$(RESET)\n"

re:			fclean all