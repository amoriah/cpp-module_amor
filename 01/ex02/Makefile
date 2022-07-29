# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yono <yono@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 19:28:21 by yono              #+#    #+#              #
#    Updated: 2022/07/29 19:28:22 by yono             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main

SRC		=	main.cpp

OBJ		=	${SRC:.cpp=.o}

CC		= 	g++

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

.cpp.o:		
			@$(CC) $(FLAGS) -c $< -o $@
			
all:	$(NAME)

$(NAME):	$(OBJ) 
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:	
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:	fclean all