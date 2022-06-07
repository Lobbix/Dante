/*
** EPITECH PROJECT, 2022
** map_functions.c
** File description:
** map_functions.c
*/
#include "../includes/my_h.h"

void rectification_heigh(char **map, int j)
{
    int choice = 0;
    for (int i = 0; map[i + 1] != NULL; i ++) {
        choice = rand() % 100;
        if (map[i][j - 1] == '*') map[i][j] = 'X';
        else if (choice < 20) map[i][j] = 'X';
        else map[i][j] = '*';
    }
}

void rectification_width(char **map, int i)
{
    int choice = 0;
    for (int j = 0; map[i][j + 1] != '\0'; j ++) {
        choice = rand() % 100;
        if (map[i - 1][j] == '*') map[i][j] = 'X';
        else if (choice < 20) map[i][j] = 'X';
        else map[i][j] = '*';
    }
}