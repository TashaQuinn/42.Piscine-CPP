# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 20:19:48 by jbania            #+#    #+#              #
#    Updated: 2022/10/09 21:23:00 by jbania           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRC		=	main.cpp \
			PhoneBook.cpp \
			Contact.cpp

HDR		=	PhoneBook.hpp \
			Contact.hpp
			
# ---------------------------------

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