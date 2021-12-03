.PHONY: all clean fclean re

SRCS = ft_printf.c \
		ft_printf_fmt1.c \
		ft_printf_fmt2.c \
		ft_printf_utils.c \

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	${CC} ${CFLAGS} ${SRCS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all


