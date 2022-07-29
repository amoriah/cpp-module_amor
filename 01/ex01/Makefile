NAME	=	zombieHorde

SRC		=	main.cpp Zombie.cpp zombieHorde.cpp

OBJ		=	${SRC:.cpp=.o}

HEADER	=	ZombieHorde.hpp

CC		= 	g++

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

.cpp.o:		
			@$(CC) $(FLAGS) -c $< -o $@
			
all:	$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:	
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:	fclean all