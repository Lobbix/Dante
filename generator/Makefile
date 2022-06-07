##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	sources/my_putchar.c	\
		sources/my_putstr.c	\
		sources/my_putnbr.c	\
		sources/initialisations.c	\
		sources/list_functions.c	\
		sources/nodes_gestion.c	\
		sources/p_nodes_gestion.c	\
		sources/map_functions.c	\
		sources/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	generator

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all
