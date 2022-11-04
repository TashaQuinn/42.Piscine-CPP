# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 00:12:18 by jbania            #+#    #+#              #
#    Updated: 2022/11/02 06:15:59 by jbania           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	animal

SRC		=	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

HDR		=	Animal.hpp \
			Dog.hpp \
			Cat.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp

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