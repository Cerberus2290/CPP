# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/01 08:15:48 by tstrassb          #+#    #+#              #
#    Updated: 2023/09/01 08:15:49 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GREY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

.PHONY:		all clean re

all:		$(NAME)

$(NAME):
			@printf "$(YELLOW)	-compiling $(NAME)...$(RESET)\n"
			@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
			@printf "$(GREEN)	-$(NAME) ready!\n$(RESET)"

clean:
			@$(RM) $(NAME)
			@printf "$(GREY)	-$(NAME) removed!$(RESET)\n"

fclean:
			@$(RM) $(NAME)
			@printf "$(GREY)	-$(NAME) removed!$(RESET)\n"

re:			clean all