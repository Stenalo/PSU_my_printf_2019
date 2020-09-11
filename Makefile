##
## EPITECH PROJECT, 2019
## makefile
## File description:
## make files
##

COMP	=	ar rc

CC		=	gcc

NAME	=	libmy.a

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_printf.c	\
		lib/my/my_put_nbr.c	\
		lib/my/base_flags.c	\
		lib/my/basic_flags.c	\
		lib/my/my_putstr.c	\
		lib/my/my_putnbr_base.c	\
		lib/my/my_showstr.c	\
		lib/my/my_getnbr.c	\
		lib/my/check_char.c	\
		lib/my/check_char2.c	\
		lib/my/check_char3.c	\
		lib/my/my_put_unsigned_nbr.c	\
		lib/my/my_strlen.c

OBJ	=	$(SRC:.c=.o)

SRC_LIB	=	tests/test_sum_stdarg.c

CFLAGS	=	-W -Wall -I./include

LDFLAGS	=	-lmy -L./lib/my

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(COMP) $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

tests_run	:	$(CC) -o unit_test $(SRC) $(SRC_LIB) $(LDFLAGS) -lcriterion --coverage
				./unit_test

re	:	fclean all
