/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/
#include "../includes/my_h.h"

void error_gestion(int ac, char **av)
{
        if (ac < 3 || ac > 4) {
        perror("Please enter valild arguments\n");
        exit(EXIT_FAILURE);
    }
    if (atoi(av[1]) < 2 || atoi(av[2]) < 2) {
        perror("Please enter a valid size\n");
        exit(EXIT_FAILURE);
    }
}

int main(int ac, char **av)
{
    srand(time(NULL));
    error_gestion(ac, av);
    N_list *n_list = initialisation();
    Maze *maze = maze_initialisation(ac, av, n_list);
    if (ac == 4)
        p_dig(maze);
    else
        dig(maze);
    if (maze[0].width % 2 == 0) rectification_heigh(maze[0].map, maze[0].width - 1);
    if (maze[0].height % 2 == 0) rectification_width(maze[0].map, maze[0].height - 1);
    maze[0].map[maze[0].height - 1][maze[0].width - 1] = '*';
    maze[0].map[maze[0].height - 1][maze[0].width - 2] = '*';
    print_map(maze[0].map);
    return 0;
}