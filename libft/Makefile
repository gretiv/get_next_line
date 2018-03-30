NAME = libft.a

all: $(NAME)

FLAGS = -Werror -Wall -Wextra -c

$(NAME):
	gcc $(FLAGS) *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

fclean: clean
	rm -fr $(NAME)

clean:
	rm -fr *.o

re: fclean all
