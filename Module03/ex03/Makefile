# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 10:18:39 by tstrassb          #+#    #+#              #
#    Updated: 2023/10/05 11:46:40 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ClapTrap

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98

RM		=	rm -rf

OBJ_DIR	=	.objectFiles

SRCS	=	ClapTrap ScavTrap FragTrap DiamondTrap main

SRC		=	$(SRCS:=.cpp)
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRCS:=.o))

HEADERS	=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

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