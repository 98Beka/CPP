# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bek <bek@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 01:55:45 by bek               #+#    #+#              #
#    Updated: 2021/06/08 03:42:27 by bek              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp phonebook.cpp

INCL = Phonebook.class.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic


all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
