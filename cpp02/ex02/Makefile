NAME  = fixed

SRC = main.cpp Fixed.cpp
HEADER = Fixed.hpp
OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -O3 -lm
CC = c++
RM = rm -rf

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CXXFLAGS) -o $(@) -c $(<)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(@) $(^)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re