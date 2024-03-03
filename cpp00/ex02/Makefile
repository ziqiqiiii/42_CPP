# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 13:09:02 by tzi-qi            #+#    #+#              #
#    Updated: 2024/02/20 13:10:57 by tzi-qi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -std=c++98
NAME = account

# List of source files
SOURCES = tests.cpp Account.cpp

# Create a list of object files by replacing .cpp with .o
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile each source file into an object file
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS)

re: fclean all

test: all
	./$(NAME)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean re test fclean