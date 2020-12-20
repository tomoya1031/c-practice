NAME   = ft.a
SRCS   = test_main.c test_ft_putstr.c
OBJS   = $(SRCS:%.c=%.o)
CFLAGS = -Wall -Wextra -Werror
CC     = gcc

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS)  -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all