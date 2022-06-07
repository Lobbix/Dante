/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** my_put_nbr
'*/
#include "../includes/my_h.h"

int my_put_anything_else(int nb)
{
    if (nb < 0) {
	    my_putchar('-');
	    nb *= -1;
    }
    if (nb == 0)
	    return (nb);
    else {
        my_put_anything_else(nb / 10);
        my_putchar(nb%10 + 48);
    }
    return (0);
}

void my_putnbr(int nb)
{
    if (nb == 0)
     my_putchar('0');
    else
     my_put_anything_else(nb);
}
