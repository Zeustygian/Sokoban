/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** task 02
*/

#include "my.h"
#include<stdio.h>

char *my_strncpy(char *dest,char const *src,int n)
{
    int i = 0;

    while (src[i] != '\0' && i != n) {
        dest[i] = src[i];
        i = i + 1 ;
    }
    if (n < my_strlen(src))
        dest[i] = '\0';
    return (dest);
}
