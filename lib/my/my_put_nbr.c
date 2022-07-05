/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** oui
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int div = 1;
    int storage = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (nb / div > 10)
        div = div * 10;
    while (div != 0) {
        storage = nb / div;
        my_putchar(storage + 48);
        nb = nb % div;
        div = div / 10;
    }
    return (nb);
}
