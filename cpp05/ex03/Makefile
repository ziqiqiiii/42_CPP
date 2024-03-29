####### MAKEFILE #######

### Variables

SRCS_PATH		=	./srcs/
OBJS_PATH		=	./objs/
HEAD_PATH		=	./headers/

FILES			=	main.cpp \
					Bureaucrat.cpp \
					AForm.cpp \
					ShrubberyCreationForm.cpp \
					RobotomyRequestForm.cpp \
					PresidentialPardonForm.cpp \
					Intern.cpp

HEAD_FILES		=	Bureaucrat.hpp \
					AForm.hpp \
					ShrubberyCreationForm.hpp \
					RobotomyRequestForm.hpp \
					PresidentialPardonForm.hpp \
					Intern.hpp 

SRCS			=	${addprefix ${SRCS_PATH}, ${FILES}}
OBJS			=	${addprefix ${OBJS_PATH}, ${FILES:.cpp=.o}}
DEPS			=	${addprefix ${OBJS_PATH}, ${FILES:.cpp=.d}}
HEAD			=	${addprefix ${HEAD_PATH}, ${HEAD_FILES}}

NAME			=	Intern

CC				=	g++
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror -std=c++98


### Commandes

all:			${NAME}

${NAME}:		${OBJS}
				${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${OBJS_PATH}%.o:	${SRCS_PATH}%.cpp
				mkdir -p ${dir $@}
				${CC} -c ${CFLAGS} -MMD -MP -I${HEAD_PATH} $< -o $@

clean:
				${RM} ${OBJS_PATH}
				$(RM) *_shruberry

fclean:			clean
				${RM} ${NAME}

re:				fclean all

test: all
	./$(NAME)
-include : ${DEPS}

.PHONY:			all clean fclean re