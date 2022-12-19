NAME = template

SRC = main.cpp
HEADER = iter.tpp
OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -O3
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