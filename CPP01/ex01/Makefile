# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 20:31:08 by jbania            #+#    #+#              #
#    Updated: 2022/10/09 21:22:21 by jbania           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie

SRC		=	main.cpp \
			Zombie.cpp \
			zombieHorde.cpp \

HDR		=	Zombie.hpp

OBJ 	=	$(SRC:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -rf

all:		$(NAME)

$(NAME):	$(OBJ) $(HDR)
			$(CC) $(FLAGS) $(OBJ) -I. -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re