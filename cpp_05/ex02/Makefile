NAME = a.out

CC = clang++

INCLUDE = -I ./includes

CFLAGS = -Wall -Werror -Wextra $(INCLUDE)

SRC = ./src/

MAIN = $(addprefix $(SRC), \
	AForm.cpp  Bureaucrat.cpp  PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp  main.cpp)

OBJ = $(MAIN:%.c=%.o)

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) -c $(MAIN)
		@$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	rm -rf *.o

fclean:	clean
	rm -rf a.out

re:	fclean all