CC = g++
CFLAGS = -std=c++98
NAME = zombie

# List of source files
SOURCES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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

re: clean 

fclean: clean
	rm -f $(NAME)

test: all
	./$(NAME)

.PHONY: all clean re fclean test