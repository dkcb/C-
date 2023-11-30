VPATH		= ./obj:./src:
SRC			= main.cpp Database.cpp
OBJ			= $(SRC:.cpp=.o)
NAME		= btc
CFLAGS		= -Wall -Werror -Wextra \
 -g3 -fsanitize=address

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

run:		$(NAME)
			./$(NAME) "input.txt"

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re run
