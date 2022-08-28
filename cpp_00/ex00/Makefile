SRCS = ./megaphone.cpp

NAME = megaphone

CC = clang++
RM = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(CC) *.o -o $(NAME)

all:	$(NAME)

clean:
	@$(RM) megaphone.o

fclean: clean
	@$(RM) $(NAME)

re:	fclean all