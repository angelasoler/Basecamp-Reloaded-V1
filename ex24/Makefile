# SRCS=./srcs/ft_putchar.c ./srcs/ft_putstr.c \
# ./srcs/ft_putcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

# INCLUDES=./includes/ft_putchar.h ./includes/ft_putstr.h \
# ./includes/ft_strcmp.h ./includes/ft_strlen.h ./includes/ft_swap.h

# OBJS=${SRCS:.c=.o}

CC=gcc

CC_FLAGS=-Wall -Werror -Wextra

all: libft.a
	make clean

libft.a: ft_putchar.o ft_putstr.o ft_strcmp.o\
 ft_strlen.o ft_swap.o
	ar -rc libft.a ft_putchar.o ft_putstr.o \
	ft_strcmp.o ft_strlen.o ft_swap.o

ft_putchar.o: ./srcs/ft_putchar.c 
	$(CC) -o ft_putchar.o ./srcs/ft_putchar.c -c $(CC_FLAGS)

ft_putstr.o: ./srcs/ft_putstr.c 
	$(CC) -o ft_putstr.o ./srcs/ft_putstr.c -c $(CC_FLAGS)

ft_strcmp.o: ./srcs/ft_strcmp.c 
	$(CC) -o ft_strcmp.o ./srcs/ft_strcmp.c -c $(CC_FLAGS)

ft_strlen.o: ./srcs/ft_strlen.c ./includes/ft_strlen.h
	$(CC) -o ft_strlen.o ./srcs/ft_strlen.c -c $(CC_FLAGS)

ft_swap.o: ./srcs/ft_swap.c 
	$(CC) -o ft_swap.o ./srcs/ft_swap.c -c $(CC_FLAGS)

re: fclean all

fclean: clean
	rm libft.a

clean:
	rm -rf *.o *~
