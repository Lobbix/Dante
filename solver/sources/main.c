/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/
#include "../includes/my_h.h"

int fs_open_file(char const *filepath)
{
    int is_open = 0;

    is_open = open(filepath, O_RDONLY);
    if(is_open == -1) {
        exit(84);
    }
    else {
        return is_open;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int open;
    char str[32000];
    char **array;
    int xyz;
    int x;
    int y;

    open = fs_open_file(av[1]);
    read(open, str, 32000);
    array = my_str_to_word_array(str);
    xyz = my_strlen(str);
    x = my_strlen2(str);
    y = my_strlen3(str);
    Case *tab = malloc(sizeof(Case)*xyz);
    while (i != xyz) {
        tab[i].pos = i;
        tab[i].c = str[i];
        if (tab[i].c != '*') {
            tab[i].visited = 1;
        } else {
            tab[i].visited = 0;
        }
        i += 1;
    }
    dante(x, y, xyz, tab, array);
    printcase(x, xyz, tab);
    return 0;
}
