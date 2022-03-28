CC=gcc

CC_FLAGS=-Wall -Werror -Wextra

all: libft.a

libft.a: main.o ft_putchar.o \
ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap
	$(CC) -o libft.a main.o ft_putchar.o \
	ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

main.o: ./srcs/main.c main.o ./includes/ft_putchar.h \
./includes/ft_putstr.h ./includes/ft_strcmp.h ./includes/ft_strlen.h \
./includes/ft_swap.h
	$(CC) -o main.o ./srcs/main.c -c $(CC_FLAGS)

ft_putchar.o: ./srcs/ft_putchar.c ./includes/ft_putchar.h
	$(CC) -o ft_putchar.o ./srcs/ft_putchar.c -c $(CC_FLAGS)

ft_putstr.o: ./srcs/ft_putstr.c ./includes/ft_putstr.h
	$(CC) -o ft_putstr.o ./srcs/ft_putstr.c -c $(CC_FLAGS)

ft_strcmp.o: ./srcs/ft_strcmp.c ./includes/ft_strcmp.h
	$(CC) -o ft_strcmp.o ./srcs/ft_strcmp.c -c $(CC_FLAGS)

ft_strlen.o: ./srcs/ft_strlen.c ./includes/ft_strlen.h
	$(CC) -o ft_strlen.o ./srcs/ft_strlen.c -c $(CC_FLAGS)

ft_swap.o: ./srcs/ft_swap.c ./includes/ft_swap.h
	$(CC) -o ft_swap.o ./srcs/ft_swap.c -c $(CC_FLAGS)

re: fclean all

fclean: clean
	rm libft.a

clean:
	rm -rf *.o *~
