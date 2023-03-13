CC = gcc

NAME = libftprintf.a

SRC =  ft_printf.c		\
	   ft_putchar_fd.c	\
	   ft_putstr_fd.c	\
	   ft_putnbr_fd.c	\
	   ft_putnbr_base.c \
	   ft_printf_function.c	

OBJ_S = $(SRC:.c=.o)

CFLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ_S)
	ar -rcs $@ $^

%.o:%.c
	@$(CC) -c $(CFLAG) -I. $< -o $@

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re