/*
** EPITECH PROJECT, 2022
** p_nodes_gestion.c
** File description:
** p_nodes_gestion.c
*/
#include "../includes/my_h.h"

void p_dig(Maze *maze)
{
    int i = 0;
    int j = 0;
    maze[0].map[i][j] = '*';
    while (maze[0].list->first != NULL) {
        i = maze[0].list->first->posx;
        j = maze[0].list->first->posy;
        switch (rand() % 4) {
        case 0:
            if (i > 1) p_look_up(maze[0].map, i, j, maze[0].list);
            if (i < maze[0].height - 2) p_look_down(maze[0].map, i, j, maze[0].list);
            if (j > 1)  p_look_left(maze[0].map, i, j, maze[0].list);
            if (j < maze[0].width - 2)  p_look_right(maze[0].map, i, j, maze[0].list);
            break;
        case 1:
            if (j > 1)  p_look_left(maze[0].map, i, j, maze[0].list);
            if (i > 1)  p_look_up(maze[0].map, i, j, maze[0].list);
            if (j < maze[0].width - 2)  p_look_right(maze[0].map, i, j, maze[0].list);
            if (i < maze[0].height - 2)  p_look_down(maze[0].map, i, j, maze[0].list);
            break;
        case 2:
            if (i < maze[0].height - 2)  p_look_down(maze[0].map, i, j, maze[0].list);
            if (i > 1)  p_look_up(maze[0].map, i, j, maze[0].list);
            if (j > 1)  p_look_left(maze[0].map, i, j, maze[0].list);
            if (j < maze[0].width - 2)  p_look_right(maze[0].map, i, j, maze[0].list);
            break;
        case 3:
            if (j < maze[0].width - 2)  p_look_right(maze[0].map, i, j, maze[0].list);
            if (i < maze[0].height - 2)  p_look_down(maze[0].map, i, j, maze[0].list);
            if (j > 1)  p_look_left(maze[0].map, i, j, maze[0].list);
            if (i > 1)  p_look_up(maze[0].map, i, j, maze[0].list);
            break;
        }
        depush(maze[0].list, i, j);
    }
}

void p_look_up(char **map, int i, int j, N_list *n_list)
{
    if (map[i - 2][j] == 'X' && map[i - 1][j] == 'X') {
        map[i - 1][j] = '*';
        map[i - 2][j] = '*';
        push(n_list, i - 2, j);
    }
}

void p_look_down(char **map, int i, int j, N_list *n_list)
{
    if (map[i + 2][j] == 'X' && map[i + 1][j] == 'X') {
        map[i + 1][j] = '*';
        map[i + 2][j] = '*';
        push(n_list, i + 2, j);
    }
}

void p_look_left(char **map, int i, int j, N_list *n_list)
{
    if (map[i][j - 2] == 'X' && map[i][j - 1] == 'X') {
        map[i][j - 1] = '*';
        map[i][j - 2] = '*';
        push(n_list, i, j - 2);
    }
}

void p_look_right(char **map, int i, int j, N_list *n_list)
{
    if (map[i][j + 2] == 'X' && map[i][j + 1] == 'X') {
        map[i][j + 1] = '*';
        map[i][j + 2] = '*';
        push(n_list, i, j + 2);
    }
}