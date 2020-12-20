NAME   = hello
SRCS   = hello.c
OBJS   = $(SRCS:%.c=%.o)
CC     = gcc
CFLAGS = -Wall -Wextra -Werror -c

$(NAME): $(OBJS)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all