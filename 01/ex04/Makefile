# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 16:15:01 by amoriah           #+#    #+#              #
#    Updated: 2022/08/04 16:15:03 by amoriah          ###   ########.fr        #
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
