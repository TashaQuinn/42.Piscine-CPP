# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 12:35:27 by jbania            #+#    #+#              #
#    Updated: 2022/11/02 06:12:28 by jbania           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	serialize

SRC		=	main.cpp \

OBJ 	=	$(SRC:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)

%.o:		%.cpp $(HDR)
			$(CC) $(FLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

val:
			valgrind --leak-check=full -s ./$(NAME)

.PHONY:		all clean fclean re