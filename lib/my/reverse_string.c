/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd01-lucas.gangnant
** File description:
** reverse_string
*/

#include<stdio.h>
#include "my.h"

char *reverse_string(char *str)
{
    int i = 0;
    int len_max = my_strlen(str) - 1;
    char tmp;

    while (i < len_max) {
        tmp = str[i];
        str[i] = str[len_max];
        str[len_max] = tmp;
        i++;
        len_max--;
    }
    return (str);
}
