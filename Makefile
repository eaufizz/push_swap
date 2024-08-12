NAME = push_swap
CC = cc
CFLAG = -Wall -Wextra -Werror
LIB = ft_printf/libftprintf.a
SRCS = *.c

all: $(NAME)
$(NAME): $(LIB)
	$(CC) $(CFLAG) -o $(NAME) $(SRCS) $(LIB)
$(LIB):
	make -C ft_printf all

clean:
	make -C ft_printf clean

fclean: clean
	rm -f $(NAME) ft_printf/libftprintf

re: fclean all

PHONY: all clean fclean re