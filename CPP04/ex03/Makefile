# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 00:10:50 by jbania            #+#    #+#              #
#    Updated: 2022/10/15 00:11:10 by jbania           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	materia

SRC		=	main.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \
			Character.cpp \
			MateriaSource.cpp

HDR		=	AMateria.hpp \
			Cure.hpp \
			Ice.hpp \
			Character.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp

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

.PHONY:		all clean fclean re