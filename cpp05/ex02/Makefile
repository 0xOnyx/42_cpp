NAME  = Bureaucrat

SRC = main.cpp Bureaucrat.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp
HEADER = Bureaucrat.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp
OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -O3 -g3
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