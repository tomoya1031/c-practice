NAME   = hello
SRCS   = hello.c
OBJS   = $(SRCS:.c=.o)
CC     = gcc
CFLAGS = -Wall -Wextra -Werror -c

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)#いらない？

.c.o:
	$(cc) - c $< -o $@ #$@いらない？
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all#いらない？
