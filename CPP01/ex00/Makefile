VPATH		= ./obj:./src:
SRC			= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ			= $(SRC:.cpp=.o)
NAME		= zombie
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 # -g -fsanitize=address
CC			=	c++

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
run:		$(NAME)
			./$(NAME)
clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus run