NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c error.c mysort1.c mysort2.c push.c \
        reverse_rotate.c rotate.c sort_1-3.c swap.c \
        utils1.c utils2.c utils3.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

