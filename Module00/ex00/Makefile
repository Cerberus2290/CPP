NAME		=	megaphone

CC			=	c++

FLAGS		=	-Wall -Werror -Wextra -std=c++98

RM			=	rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
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
			@printf "$(GREY)	-$(NAME) removed!$(RESET)"

fclean:
			@$(RM) $(NAME)
			@printf "$(GREY)	-$(NAME) removed!$(RESET)"

re:			clean all