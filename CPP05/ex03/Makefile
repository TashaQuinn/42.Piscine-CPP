# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 07:39:17 by jbania            #+#    #+#              #
#    Updated: 2022/11/04 23:33:07 by jbania           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bureaucrat

SRC		=	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp

HDR		=	Bureaucrat.hpp \
			Form.hpp \
			ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp \
			PresidentialPardonForm.hpp \
			Intern.hpp

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