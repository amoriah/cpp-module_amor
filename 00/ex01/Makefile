# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 11:44:03 by amoriah           #+#    #+#              #
#    Updated: 2022/07/11 17:21:57 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		=	main.cpp commands.cpp

OBJ		=	${SRC:.cpp=.o}

NAME	=	PhoneBook

HEADER	=	PhoneBook.hpp Contact.hpp

CC		= 	g++

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY:	all clean fclean re

.cpp.o:		
			$(CC) $(FLAGS) -c $< -o $@
			
all:	$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)


clean:	
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:	fclean all
