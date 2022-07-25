# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 11:51:18 by amoriah           #+#    #+#              #
#    Updated: 2022/07/25 11:53:48 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	${SRC:.cpp=.o}

CC		= 	g++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

.PHONY:	all clean fclean re

.cpp.o:		
			$(CC) $(FLAGS) -c $< -o $@
			
all:		$(NAME)

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)


clean:	
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:	fclean all