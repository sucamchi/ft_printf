NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs

SRCS =	ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putvoid.c \
		ft_putunsig.c \
		ft_puthex.c \

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