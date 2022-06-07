##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

all: generator solver

generator:
	make -C generator

solver:
	make -C solver

clean:
	make clean -C generator
	make clean -C solver

fclean:	clean
	make fclean -C generator
	make fclean -C solver

re: fclean all

.PHONY: generator solver fclean clean re