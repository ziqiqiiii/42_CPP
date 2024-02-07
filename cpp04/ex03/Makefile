CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g
NAME = amateria

# List of source files
SOURCES = main.cpp \
			AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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