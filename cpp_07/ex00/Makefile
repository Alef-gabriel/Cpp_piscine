SRCS = main.cpp whatever.cpp

NAME = a.out

CC = clang++
RM = rm -f

CFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(CC) *.o -o $(NAME)

all:	$(NAME)

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)

re:	fclean all