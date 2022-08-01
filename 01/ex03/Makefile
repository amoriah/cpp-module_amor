# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yono <yono@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 12:15:25 by yono              #+#    #+#              #
#    Updated: 2022/08/01 15:57:33 by yono             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	unnecessaryViolence

SRC_DIR	=	src
INC_DIR	=	inc
OBJ_DIR	=	obj

SRC		=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC		= 	g++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRC		:=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJ		=	$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)


GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

all:	$(NAME)

$(NAME): $(OBJ)
			@$(CC) $(FLAGS)  -o $(NAME) $(OBJ)
			@echo $(GREEN)"OK!"$(DELCOL)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
			@$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@
			
clean:
			@$(RM) $(OBJ)

fclean: clean
			@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re