/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** my_putchar.c
*/
#include "../includes/my_h.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
