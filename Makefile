##
## EPITECH PROJECT, 2021
## my_hunter
## File description:
## Duck-hunt game like
##

LFLAGS = -L ./lib/my -lmy -lncurses

SRC =	$(wildcard *.c)

LIBSRC = $(wildcard lib/my/*.c \
					source/*c)

NAME = my_sokoban

IFLAGS = -I ./include

CFLAGS = -W -Wall -Werror -Wextra

$(NAME): compile
	gcc -o $(NAME) $(CFLAGS) $(SRC) $(IFLAGS) $(LFLAGS)

all:	compile
	gcc -o $(NAME) $(CFLAGS) $(IFLAGS) $(LFLAGS) ./source/*.c

compile:
	gcc -c $(LIBSRC) $(CFLAGS) -I ./include
	mv *.o ./lib/my
	ar rc libmy.a ./lib/my/*.o
	mv libmy.a ./lib/my

clean:
	rm -f *~ \#*\# *.o
	rm -f lib/my/*.o
	rm -f lib/my/libmy.a

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
