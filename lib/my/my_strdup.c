/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-bsminishell1-lucas.gangnant
** File description:
** my_strdup
*/

#include "my.h"
#include <stdlib.h>

char *my_strdup(char *src)
{
    int i = 0;
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));

    if (str == NULL)
        return NULL;
    while (i < (my_strlen(src))) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
