NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++
RM = rm -rf

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -o $(@) -c $(<)

$(NAME): $(OBJ)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re