NAME = libftprintf.a
SRCS =	ft_printf.c \
		printf_putchar.c \
		printf_putnbr.c \
		printf_putstr.c \
		printf_putvoid.c \
		printf_putunsig.c \
		printf_puthex.c \
		printf_putupphex.c
OBJS = $(SRCS:.c=.o)
CC = cc
AR = ar
ARFLAGS = rcs
CFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c $(HEADER)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re