# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yono <yono@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 12:15:25 by yono              #+#    #+#              #
#    Updated: 2022/07/30 13:54:39 by yono             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	unnecessaryViolence

SRC_DIR	=	./src/
INC_DIR	=	./inc/
OBJ_DIR	=	./obj/

# SRC		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
# INC		=	HumanA.hpp HumanB.hpp Weapon.hpp
OBJ 	=	$(addprefix $(OBJ_DIR), $(SRC_DIR:.cpp=.o))

CC		= 	g++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

.PHONY:	all clean fclean re

.cpp.o:		
			@$(CC) $(FLAGS) -c $< -o $@
			
all:	$(NAME)

$(NAME):	$(OBJ) $(INC_DIR)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:	
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:	fclean all