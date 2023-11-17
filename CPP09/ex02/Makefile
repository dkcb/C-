VPATH		= ./obj:./src:
SRC			= main.cpp pmergeme.cpp
OBJ			= $(SRC:.cpp=.o)
NAME		= PmergeMe
CFLAGS		= -Wall -Werror -Wextra \
-g3 -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

run:		$(NAME)
			./$(NAME) "3" "1" "6" "2"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re run
