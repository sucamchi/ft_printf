NAME = libftprintf.a


CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

SRCS =	ft_printf.c \
		printf_putchar.c \
		printf_putnbr.c \
		printf_putstr.c \
		printf_putvoid.c \
		printf_putunsig.c \
		printf_puthex.c \
		printf_putupphex.c
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re