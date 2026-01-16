# **************************************************************************** #
#                                  Makefile                                    #
# **************************************************************************** #

NAME = phonebook
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp PhoneBook.cpp Contact.cpp
INCLUDES = PhoneBook.hpp Contact.hpp

# **************************************************************************** #
#                                 Build Rules                                  #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "No object files to clean."

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re
