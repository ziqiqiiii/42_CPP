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
	rm -f $(OBJECTS) $(NAME)

re: clean all

test: all
	./$(NAME)

.PHONY: all clean re test