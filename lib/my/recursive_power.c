/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd02-lucas.gangnant
** File description:
** power function in recursive
*/

#include <stdio.h>
#include "my.h"

int recursive_power(int nb, int p)
{
    int result = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    result *= recursive_power(nb, p - 1);
    return (result);
}
