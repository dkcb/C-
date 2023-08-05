VPATH		= ./obj:./src:
SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)
NAME		= Literals
CFLAGS		= #-Wall -Werror -Wextra -std=c++98 \
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
