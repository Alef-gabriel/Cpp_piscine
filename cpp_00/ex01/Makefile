SRCS = contact.cpp main.cpp phoneBook.cpp

NAME = phoneBook

CC = c++
RM = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@$(CC) *.o -o $(NAME)

all:	$(NAME)

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)

re:	fclean all