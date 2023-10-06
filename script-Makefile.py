import os
import readline

lines = """NAME	=   

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98

RM		=	rm -rf

OBJ_DIR	=	.objectFiles

MAIN	=	

SRCS	=	$(addsuffix .cpp, $(addprefix srcs/, $(MAIN)))
OBJ		=	$(addprefix $(OBJ_DIR)/, $(SRCS:cpp=o))

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
"""

def path_completer(text, state):
    dir_part, file_part = os.path.split(text)

    current_dir = dir_part if dir_part else "./"
    entries = os.listdir(current_dir)

    matches = [entry for entry in entries if entry.startswith(file_part)]

    if state < len(matches):
        return os.path.join(dir_part, matches[state])
    else:
        return None

readline.set_completer_delims('\t')
readline.parse_and_bind('tab: complete')
readline.set_completer(path_completer)

relative_path = input('Enter the file path: ')

home_directory = os.path.expanduser("~")

file_path = os.path.join(home_directory, relative_path)

os.makedirs(os.path.dirname(file_path), exist_ok=True)

try:
    with open(file_path, 'a') as file:
        file.write(lines)
    print('Success!', file_path)
except Exception as e:
    print('Error writing to file:', e)