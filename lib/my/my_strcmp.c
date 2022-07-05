/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd02-lucas.gangnant
** File description:
** my_strcmp
*/

#include <stdio.h>
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2))
        return 2;
    while (s1 != NULL && s2 != NULL && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return (1);
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] == s2[i])
            i++;
    }
    return 0;
}
