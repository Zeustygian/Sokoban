/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd02-lucas.gangnant
** File description:
** iterative_factorial
*/

#include <stdio.h>
#include "my.h"

int iterative_factorial(int nb)
{
    int result = nb;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    while (nb > 1) {
        result *= nb - 1;
        nb--;
    }
    return (result);
}
