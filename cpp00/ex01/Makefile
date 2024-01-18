CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address
NAME = phonebook

# List of source files
SOURCES = Contact.cpp PhoneBook.cpp main.cpp

# Create a list of object files by replacing .cpp with .o
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile each source file into an object file
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(NAME)

re: fclean all

fclean: clean
	rm -f $(NAME)

test: all
	./$(NAME)

.PHONY: all clean re test fclean