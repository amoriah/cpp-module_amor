# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoriah <amoriah@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 15:08:19 by amoriah           #+#    #+#              #
#    Updated: 2022/08/04 15:08:23 by amoriah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook

SRC_DIR	=	src
INC_DIR	=	inc
OBJ_DIR	=	obj

SRC		=	main.cpp commands.cpp Contact.cpp PhoneBook.cpp

CC		= 	g++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRC		:=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJ		=	$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

GREEN	=	"\033[05;32m"
DELCOL	=	"\033[0m"

.PHONY	: all clean fclean re

$(NAME)	: $(OBJ)
			@$(CC) $(FLAGS)  -o $(NAME) $(OBJ)
			@echo $(GREEN)"OK!"$(DELCOL)

all		:	$(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
			@$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@
			
clean	:
			@$(RM) $(OBJ)

fclean	: clean
			@$(RM) $(NAME)

re		:	fclean all
