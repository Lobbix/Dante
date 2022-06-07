/*
** EPITECH PROJECT, 2021
** my_h.h
** File description:
** my_h.h
*/
#pragma once
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

extern void my_putchar(char);
extern void my_putstr(char *);
extern void my_putnbr(int);

typedef struct Nodes {
    int posx;
    int posy;
    struct Nodes *next;
} Nodes;

typedef struct N_list {
    struct Nodes *first;
} N_list;

typedef struct Maze {
    int is_perfect;
    int height;
    int width;
    char **map;
    N_list *list;
} Maze;

//initialisations.c
Maze *maze_initialisation(int, char **, N_list *);
char **fill_map(int, int);
void print_map(char **);

//nodes_gestion
void dig(Maze *);
void look_up(char **, int, int, N_list *);
void look_down(char **, int, int, N_list *);
void look_left(char **, int, int, N_list *);
void look_right(char **, int, int, N_list *);

//p_nodes_gestion
void p_dig(Maze *);
void p_look_up(char **, int, int, N_list *);
void p_look_down(char **, int, int, N_list *);
void p_look_left(char **, int, int, N_list *);
void p_look_right(char **, int, int, N_list *);

//list_functions.c
N_list *initialisation();
void push(N_list *, int, int);
void depush(N_list *, int, int);
void print_nodes(N_list *);

//map_functions.c
void rectification_heigh(char **, int);
void rectification_width(char **, int);