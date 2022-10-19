# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbania <jbania@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 20:22:14 by jbania            #+#    #+#              #
#    Updated: 2022/10/09 21:23:05 by jbania           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
SRC = megaphone.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(SRC)
		$(CC) $(FLAGS) -o $@ $^
clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re