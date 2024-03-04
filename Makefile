SRC		=  ft_convbase.c ft_convbase_x.c ft_putchar.c \
		ft_putstr.c ft_convbaseX.c ft_printf.c \
		ft_putnbr.c	ft_putunsigned.c \
		ft_strlen.c \

OBJS	= ${SRC:.c=.o}
NAME	= libftprintf.a
LIBC	= ar rcs
CC		= cc
RM		= rm -f
CFLAGS  = -Wall -Wextra -Werror

%.o:%.c
	$(CC) $(CFLAGS) -c $^

all: ${NAME}

${NAME}: $(OBJS)
	${LIBC} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all bonus clean fclean re
