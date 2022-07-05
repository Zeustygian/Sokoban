/*
** EPITECH PROJECT, 2022
** my
** File description:
** my_strndup
*/

#include "my.h"
#include <stdlib.h>

char *my_strndup(char *str, int n)
{
    char *dup = malloc(sizeof(char) + (n + 1));
    int i = 0;

    for (; str[i] && i < n; i++)
        dup[i] = str[i];
    dup[i] = '\0';
    return (dup);
}
