VPATH		= ./obj:./src:
SRC			= Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp main.cpp
OBJ			= $(SRC:.cpp=.o)
NAME		= Intern
CFLAGS		= -Wall -Werror -Wextra -std=c++98 \
# -g3 -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

run:		$(NAME)
			./$(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re run
