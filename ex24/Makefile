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
