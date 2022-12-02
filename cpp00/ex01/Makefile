NAME = phonebook

SRC = PhoneBook.cpp Contact.cpp main.cpp
HEADER = phonebook.hpp contact.hpp

OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
RM = rm -rf

all : $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -o $(@) -c $(<)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(@) $(^)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re