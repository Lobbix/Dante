/*
** EPITECH PROJECT, 2022
** dante.c
** File description:
** dante
*/
#include "../includes/my_h.h"

void dante(int len, int y, int xyz, struct Case *tab, char **array)
{
    int pos = 0;
    int temp;
    int i = 0;
    int j = 0;

    y += 1;
    tab[pos].c = 'o';
    tab[pos].visited = 1;
    while (pos != xyz - 1) {
        if ((j+1 <= len && j+1 >= 0) && array[i][j+1] == '*' && tab[pos+1].visited == 0) {
            temp = pos;
            pos += 1;
            j += 1;
            tab[pos].jbefore = j;
            tab[pos].ibefore = i;
            tab[pos].before = temp;
            tab[pos].c = 'o';
            tab[pos].visited = 1;
        }
        else if ((i+1 < y && i+1 >= 0) && array[i+1][j] == '*' && tab[pos+len+1].visited == 0) {
            temp = pos;
            pos += len+1;
            i += 1;
            tab[pos].jbefore = j;
            tab[pos].ibefore = i;
            tab[pos].before = temp;
            tab[pos].c = 'o';
            tab[pos].visited = 1;
        }
        else if ((j-1 <= len && j-1 >= 0) && array[i][j-1] == '*' && tab[pos-1].visited == 0) {
            temp = pos;
            pos -= 1;
            j -= 1;
            tab[pos].jbefore = j;
            tab[pos].ibefore = i;
            tab[pos].before = temp;
            tab[pos].c = 'o';
            tab[pos].visited = 1;
        }
        else if ((i-1 <= y && i-1 >= 0) && array[i-1][j] == '*' && tab[pos-(len+1)].visited == 0) {
            temp = pos;
            pos -= len+1;
            i -= 1;
            tab[pos].jbefore = j;
            tab[pos].ibefore = i;
            tab[pos].before = temp;
            tab[pos].c = 'o';
            tab[pos].visited = 1;
        } else {
            tab[pos].c = '*';
            pos = tab[pos].before;
            j = tab[pos].jbefore;
            i = tab[pos].ibefore;
        }
    }
}