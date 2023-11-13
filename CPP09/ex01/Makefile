VPATH		= ./obj:./src:
SRC			= main.cpp rpn_calculator.cpp
OBJ			= $(SRC:.cpp=.o)
NAME		= RPN
CFLAGS		= #-Wall -Werror -Wextra -std=c++98 \
# -g3 -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

run:		$(NAME)#			./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +"
			./$(NAME) "1 2 * 2 / 2 * 2 4 - +"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re run
