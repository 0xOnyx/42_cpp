NAME = violence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -O3
CC = c++
RM = rm -rf

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CXXFLAGS) -o $(@) -c $(<)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAG) -o $(@) $(^)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
