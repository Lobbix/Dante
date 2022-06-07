/*
** EPITECH PROJECT, 2021
** my_h.h
** File description:
** my_h.h
*/
#pragma once
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct Case Case;
struct Case
{
    int pos;
    int visited;
    int before;
    char c;
    int ibefore;
    int jbefore;
};

//main.c
int fs_open_file(char const *filepath);

//dante.c
void dante(int len, int y, int xyz, struct Case *tab, char **array);

//print.c
void printcase(int x, int xyz, struct Case *tab);
void print_map(char **map);

//my_str_to_word_array.c
int is_alphanum(char c);
int	nb_word(char *str);
char **my_str_to_word_array(char *str);

//str_func.c
int my_strlen(char *str);
char *my_strncpy(char *dest, char *src, int n);
int my_strlen2(char *str);
int my_strlen3(char *str);