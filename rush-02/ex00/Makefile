NAME   = rush-02
SRCS   = convert_by_dictionary.c is_valid_arg.c readsize.c convert_numbers_to_word.c jump_to_next_line.c create_0_digit.c main.c skip_space.c create_ten_digit.c str_to_numbers.c str_to_numbers_recursive.c ft_putstr.c trim_str.c ft_strlen.c readfile.c trim_word.c str_to_numbers_recursive_if_needed.c
CFLAGS = -Wall -Wextra -Werror -I./ 
CC     = gcc

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS)	-o $(NAME) $(SRCS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
