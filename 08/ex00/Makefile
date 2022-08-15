# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 11:33:52 by amoriah           #+#    #+#              #
#    Updated: 2022/08/15 13:29:24 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	easyfind

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
			@echo $(GREEN)"OK! easyfind is ready!"$(DELCOL)

%.o		:	%.cpp 
			@$(CC) $(FLAGS) -c $< -o $@

clean	:
		@$(RM) $(OBJ)

fclean	:		clean
		@$(RM) $(NAME)

re		:		fclean all