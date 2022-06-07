/*
** EPITECH PROJECT, 2022
** str_func.c
** File description:
** str_func
*/
#include "../includes/my_h.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}

char *my_strncpy(char *dest, char *src, int n)
{
    int j = 0;

    if (n > my_strlen(src)) {
        while (j < my_strlen(src)) {
            dest[j] = src[j];
            j++;
        }
        dest[j + 1] = '\0';
    }
    for (int i = 0; i < n; i ++)
        dest[i] = src[i];
    return dest;
}

int my_strlen2(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i += 1;
    }
    return i;
}

int my_strlen3(char *str)
{
    int i = 0;
    int x = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            x += 1;
        }
        i += 1;
    }
    return x;
}