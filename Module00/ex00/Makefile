# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bek <bek@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 03:46:13 by bek               #+#    #+#              #
#    Updated: 2021/06/08 03:48:42 by bek              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = megaphone
SRCS  = megaphone.cpp
CC    = clang++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJS  = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re