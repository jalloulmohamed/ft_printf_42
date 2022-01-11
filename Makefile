CC = gcc

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_putchar.c ft_lenint.c ft_putnbr.c ft_lenhex.c ft_puthex.c ft_putstr.c ft_putadr.c ft_lenpoi.c


OBJ = $(SRC:.c=.o)





all : $(NAME)

$(NAME) : $(OBJ) ft_printf.h
	ar rcs $@ $^



%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ) $(bonus-obj)

fclean : clean
	rm -rf $(NAME)

re : fclean all
