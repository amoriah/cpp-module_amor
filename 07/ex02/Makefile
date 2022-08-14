# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 15:06:02 by amoriah           #+#    #+#              #
#    Updated: 2022/08/14 17:09:24 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	array

SRC		=	main.cpp
HEADER	=	Array.hpp
OBJ		=	$(patsubst %.cpp, %.o, $(SRC))

CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I$(HEADER)
rm		=	rm -f

GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
			@$(CC) $(CFLAGS) -o $(NAME)	$(OBJ)
			@echo $(GREEN)"OK! array is ready!"$(DELCOL)

%.o		:	%.cpp $(HEADER)
			@$(CC) $(FLAGS) -c $< -o $@

clean	:
			@$(RM) $(OBJ)

fclean	:	clean
			@$(RM) $(NAME)

re		:	fclean all