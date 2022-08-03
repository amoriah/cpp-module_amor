# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yono <yono@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 12:42:56 by yono              #+#    #+#              #
#    Updated: 2022/08/03 12:47:42 by yono             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl

SRC		=	main.cpp Harl.cpp

OBJ		=	${SRC:.cpp=.o}

HEADER	=	Harl.hpp

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