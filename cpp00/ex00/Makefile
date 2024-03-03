# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 13:19:14 by tzi-qi            #+#    #+#              #
#    Updated: 2024/02/20 13:19:15 by tzi-qi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= g++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
NAME	= megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	$(CC) $(CFLAGS) -o $(NAME) megaphone.cpp


clean:
	rm -f $(NAME)

fclean: clean

re: clean

.PHONY: clean all fclean