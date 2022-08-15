# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 16:17:58 by amoriah           #+#    #+#              #
#    Updated: 2022/08/04 16:18:00 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Harl

SRC		=	main.cpp Harl.cpp
OBJ		=	${SRC:.cpp=.o}

HEADER	=	Harl.hpp

CC		= 	g++
RM		=	rm -f
FLAGS	=	-Wall -Wextra -Werror -std=c++98

GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

.PHONY	:	all clean fclean re

.cpp.o	:		
			@$(CC) $(FLAGS) -c $< -o $@
			
all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			@echo $(GREEN)"OK!"$(DELCOL)

clean	:	
			@$(RM) $(OBJ)

fclean	:		clean
			@$(RM) $(NAME)

re		:	fclean all