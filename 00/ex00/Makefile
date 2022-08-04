# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 11:51:18 by amoriah           #+#    #+#              #
#    Updated: 2022/08/04 15:05:39 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	$(wildcard *.cpp)
OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

CC		=	g++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

.PHONY	:	all clean fclean re

$(NAME) :	$(OBJ) 
			@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
			@echo $(GREEN)"OK!"$(DELCOL)
			
all		:	$(NAME)

%.o 	: 	%.cpp
			@$(CC) -c $< -o $@

clean 	: 
			@$(RM) *.o
		
fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all