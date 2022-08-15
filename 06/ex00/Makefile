# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/13 12:26:59 by amoriah           #+#    #+#              #
#    Updated: 2022/08/13 15:53:53 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	converter

SRC		=	main.cpp

OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

CC		=	g++
CFLAGS	=	-g -Wall -Wextra -Werror -std=c++98
RM		=	rm -f

GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

.PHONY	:	all clean fclean re

all			:	$(NAME)

$(NAME)	:	$(OBJ) 
			@$(CC) $(CFLAGS) -o $(NAME)	$(OBJ)
			@echo $(GREEN)"OK! converter is ready!"$(DELCOL)

%.o		:	%.cpp 
			@$(CC) $(FLAGS) -c $< -o $@

clean	:
		@rm -f $(OBJ)

fclean	:		clean
		@rm -f $(NAME)

re		:		fclean all