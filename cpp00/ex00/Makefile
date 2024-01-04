CC		= g++
CFLAGS	= -std=c++98 -Wall -Wextra -Werror
NAME	= megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	$(CC) $(CFLAGS) -o $(NAME) megaphone.cpp


clean:
	rm -f $(NAME)

re: clean all

.PHONY: clean all