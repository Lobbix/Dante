/*
** EPITECH PROJECT, 2022
** initialisations.c
** File description:
** initialisations.c
*/
#include "../includes/my_h.h"

Maze *maze_initialisation(int ac, char **av, N_list *n_list)
{
    Maze *maze = malloc(sizeof(Maze));
    maze[0].width = atoi(av[1]);
    maze[0].height = atoi(av[2]);
    maze[0].map = fill_map(maze[0].height, maze[0].width);
    maze[0].list = n_list;
    return maze;
}

char **fill_map(int heigh, int width)
{
    char **maze = malloc(sizeof(char *) * heigh + 1);
    for (int i = 0; i != heigh; i ++) {
        maze[i] = malloc(sizeof(char) * (width + 1));
        for (int j = 0; j != width; j ++) {
            maze[i][j] = 'X';
        }
        maze[i][width + 1] = '\0';
    }
    maze[heigh + 1] = NULL;
    return maze;
}

void print_map(char **map)
{
    for (int i = 0; map[i] != NULL; i ++) {
        my_putstr(map[i]);
        if (map[i + 1] != NULL)
            my_putchar('\n');
    }
}