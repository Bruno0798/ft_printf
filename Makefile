NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = cc

SRCS = 	src/ft_print_char.c src/ft_print_decimal.c src/ft_print_hexadecimal.c \
		src/ft_print_percent.c src/ft_print_pointer.c src/ft_print_string.c \
		src/ft_print_unsigned_decimal.c src/ft_printf.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a .
	mv libft.a ${NAME}
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C ./libft
	rm -rf $(OBJS)

fclean: clean
	make clean -C ./libft
	rm -rf $(NAME)

re: fclean all

.SILENT: