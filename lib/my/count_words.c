/*
** EPITECH PROJECT, 2022
** stumper
** File description:
** count numbers of words
*/

#include <unistd.h>
#include "my.h"

int count_words(char *str, char separator)
{
    int i = 0;
    int count = 0;

    while (str != NULL && str[i] != '\0') {
        if (str[i] == separator) {
            i++;
            count++;
        }
        i++;
    }
    count++;
    return count;
}
