/*
** EPITECH PROJECT, 2022
** list_functions.c
** File description:
** list_funnctions.c
*/
#include "../includes/my_h.h"

N_list *initialisation()
{
    N_list *n_list = malloc(sizeof(*n_list));
    Nodes *node = malloc(sizeof(*node));

    if (n_list == NULL || node == NULL) {
        perror("allocation failure\n");
        exit(EXIT_FAILURE);
    }
    node->posx = 0;
    node->posy = 0;
    node->next = NULL;
    n_list->first = node;
    return n_list;
}

void push(N_list *n_list, int x, int y)
{
    Nodes *new = malloc(sizeof(*new));
    if (n_list == NULL || new == NULL) {
        perror("empty list or elem failure\n");
        exit(EXIT_FAILURE);
    }
    new->posx = x;
    new->posy = y;
    new->next = n_list->first;
    n_list->first = new;
}

void depush(N_list *n_list, int x, int y)
{
    if (n_list == NULL) {
        perror("empty list failure\n");
        exit(EXIT_FAILURE);
    }
    Nodes *current = n_list->first;
    if (current->posx == x && current->posy == y) {
        n_list->first = n_list->first->next;
        free(current);
    } else {
        while (current->next->posx != x || current->next->posy != y) {
            current = current->next;
        }
        Nodes *deleted = current->next;
        current->next = current->next->next;
        free(deleted);
    }
}

void print_nodes(N_list *n_list)
{
    if (n_list == NULL) {
        perror("try to print an empty list\n");
        exit(EXIT_FAILURE);
    }
    Nodes *current = n_list->first;

    for (int i = 0; current != NULL; i ++) {
        printf("node %d, x = %d, y = %d\n", i, current->posx, current->posy);
        current = current->next;
    }
    printf("start\n");
}