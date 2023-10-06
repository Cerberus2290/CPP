import os
import sys

while True:
    print("Choose an option:")
    print("1. Write C++ header code")
    print("2. Write C++ Makefile")
    print("3. Write comments to C++ file")
    print("4. Exit")

    choice = input("Enter choice [1][2][3][4]: ")

    if choice == '1':
        cpp_code = """#ifndef *_HPP
# define *_HPP

#include "*.hpp"

class   *
{
    public:
        // Constructor
        *();
        *(const * &*);
        // Overload Assignment Operator
        *& operator=(const * &*);
        // Member Function
        
        // Destructor
        ~*();
};

#endif
"""

        relative_path = input("Enter absolute path to [.hpp] file: ")

        home_directory = os.path.expanduser("~")
        file_path = os.path.join(home_directory, relative_path)

        os.makedirs(os.path.dirname(file_path), exist_ok=True)

        try:
            with open(file_path, 'a') as file:
                file.write(cpp_code)
            print('SUCCESS!\nC++ code successfully added to header file:', file_path)
            sys.exit(0)
        except Exception as e:
            print('Error writing C++ code to header file:', e)

    elif choice == '2':
        makefile_content = """NAME	=   

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

        relative_path = input('Enter absolute path to Makefile: ')

        home_directory = os.path.expanduser("~")
        file_path = os.path.join(home_directory, relative_path)

        os.makedirs(os.path.dirname(file_path), exist_ok=True)

        try:
            with open(file_path, 'a') as file:
                file.write(makefile_content)
            print('SUCCESS!\nMakefile template successfully written to:', file_path)
            sys.exit(0)
        except Exception as e:
            print('Error writing Makefile template to file:', e)

    elif choice == '3':
        lines = [
            '// [**** Constructors ****]',
            '',
            '// [**** Overload Assignment Operators ****]',
            '',
            '// [**** Member Functions ****]',
            '',
            '// [**** Destructor ****]',
        ]

        relative_path = input('Enter abolute path to [.cpp] file: ')

        home_directory = os.path.expanduser("~")
        file_path = os.path.join(home_directory, relative_path)

        os.makedirs(os.path.dirname(file_path), exist_ok=True)

        try:
            with open(file_path, 'a') as file:
                file.write('\n'.join(lines) + '\n')
            print('SUCCESS!\nComments successfully added to [.cpp] file:', file_path)
            sys.exit(0)
        except Exception as e:
            print('Error writing to file:', e)

    elif choice == '4':
        sys.exit(0)