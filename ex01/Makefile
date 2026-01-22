# **************************************************************************** #
#                                  Makefile                                    #
# **************************************************************************** #

NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp PhoneBook.cpp Contact.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

# **************************************************************************** #
#                                 Build Rules                                  #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MP -MMD -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all fclean clean re
