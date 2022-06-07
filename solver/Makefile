##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	sources/dante.c	\
		sources/print.c	\
		sources/str_func.c	\
		sources/my_str_to_word_array.c	\
		sources/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

debug:	$(OBJ)
	gcc -o $(NAME) $(OBJ) -g3
	valgrind ./$(NAME) map.txt

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
