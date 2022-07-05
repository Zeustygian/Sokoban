/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd03-lucas.gangnant
** File description:
** merge 2 strings together
*/

#include <stdio.h>
#include "my.h"

char *str_concat(char *dest, char const *src)
{
    int i = 0;
    int both_str_len = my_strlen(src) + my_strlen(dest);
    char *final_string = malloc(sizeof(char) * both_str_len + 1);

    for (int k = 0; dest[k] != '\0'; k++) {
        final_string[i] = dest[k];
        i++;
    }
    for (int j = 0; src[j] != '\0'; j++) {
        final_string[i] = src[j];
        i++;
    }
    final_string[i] = '\0';
    return (final_string);
}
