/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd01-lucas.gangnant
** File description:
** simply display the alphabet
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int display_alphabet(void)
{
    int i = 97;

    while (i < 123) {
        my_putchar(i);
        i++;
    }
    return (0);
}
