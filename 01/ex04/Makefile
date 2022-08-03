# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yono <yono@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 18:56:50 by yono              #+#    #+#              #
#    Updated: 2022/08/03 17:26:37 by yono             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	sed_is_for_losers

SRC		=	main.cpp
OBJ		=	${SRC:.cpp=.o}

CC		= 	g++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

.PHONY	:	all clean fclean re

$(NAME) :	$(OBJ)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			@echo $(GREEN)"OK!"$(DELCOL)
			
all		:	$(NAME)

.cpp.o	:		
			@$(CC) $(FLAGS) -c $< -o $@
			
clean	:	
			@$(RM) $(OBJ)

fclean	:		clean
			@$(RM) $(NAME)

re	:	fclean all
