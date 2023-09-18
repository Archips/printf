.PHONY: all clean fclean re

SRCS = src/ft_printf.c \
	src/ft_printf_fmt1.c \
	src/ft_printf_fmt2.c \
	src/ft_printf_utils.c \

OBJS = $(patsubst src/%.c,obj/%.o,$(SRCS))
NAME = libftprintf.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -c -g3

all: obj $(NAME)

obj:
	mkdir -p obj

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

obj/%.o: src/%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) -r obj

fclean: clean
	$(RM) $(NAME)

re: fclean all
