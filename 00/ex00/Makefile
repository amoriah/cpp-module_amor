NAME	=	megaphone

SRC		=	megaphone.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

CC		= 	g++

.PHONY	:	all clean fclean re

all		:		$(NAME)

$(NAME)	:	$(OBJ)
			@ar rcs $(NAME) $?

%.o		:	
			$(CC) $(FLAGS) -c $< -o $@

clean	:	
			@rm - f$(OBJ)

fclean	:	
			@rm -f $(NAME)

re		:	fclean all