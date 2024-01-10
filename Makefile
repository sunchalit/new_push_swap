NAME = push_swap.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRCS = main.c error.c mysort1.c mysort2.c push.c\
		push.c reverse_rotate.c rotate.c sort_1-3.c swap.c\
		utils1.c utils2.c utils3.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re