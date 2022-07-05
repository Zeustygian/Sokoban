/*
** EPITECH PROJECT, 2022
** stumper
** File description:
** my_put_digit
*/

#include <unistd.h>
#include "my.h"

int my_put_digit(int i)
{
    if (i >= 0 && i <= 9) {
        my_putchar(i + 48);
        return (0);
    }
    return (1);
}
