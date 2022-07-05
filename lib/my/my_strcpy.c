/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd02-lucas.gangnant
** File description:
** my_strcpy
*/

#include "my.h"
#include <stdio.h>

char *my_strcpy(char *src, char *dest)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
