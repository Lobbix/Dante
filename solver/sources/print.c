/*
** EPITECH PROJECT, 2022
** print.c
** File description:
** print
*/
#include "../includes/my_h.h"

void printcase(int x, int xyz, struct Case *tab)
{
    int i = 0;
    int x2 = x;

    while (i != xyz) {
        write(1, &tab[i].c,1);
        i += 1;
    }
}

void print_map(char **map)
{
    printf("\n");
    for (int i = 0; map[i] != NULL; i ++) {
        printf("%s\n", map[i]);
    }
}