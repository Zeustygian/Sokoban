/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd02-lucas.gangnant
** File description:
** is_prime_number
*/

#include <stdio.h>
#include "my.h"

int is_prime_number(int nb)
{
    int i = 2;

    if (nb <= 1)
        return (0);
    if (nb == 2)
        return (1);
    while (i < nb) {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}
