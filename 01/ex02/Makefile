# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yono <yono@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 19:28:21 by yono              #+#    #+#              #
#    Updated: 2022/08/03 17:27:11 by yono             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	hi

SRC		=	main.cpp
OBJ		=	${SRC:.cpp=.o}

CC		= 	g++
RM		=	rm -f
FLAGS	=	-Wall -Wextra -Werror -std=c++98

GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

.PHONY	:	all clean fclean re

$(NAME)	:	$(OBJ) 
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			@echo $(GREEN)"OK!"$(DELCOL)
			
all		:	$(NAME)

.cpp.o	:		
			@$(CC) $(FLAGS) -c $< -o $@
			
clean	:	
			@$(RM) $(OBJ)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all