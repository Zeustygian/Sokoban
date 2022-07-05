/*
** EPITECH PROJECT, 2022
** stumper
** File description:
** Return len bigger sub-string (from start original string) of asked char
*/

#include "my.h"
#include <unistd.h>

int my_strspn(char *str, char *accepted_chars)
{
    int len = 0;
    int j = 0;
    int i = 0;

    while (str[i] != '\0' || accepted_chars[j] != '\0') {
        if (my_charcmp(str[i], accepted_chars[j]) == 1) {
            len++;
            i++;
            j = 0;
        }
        if (my_charcmp(str[i], accepted_chars[j]) == 0)
            j++;
        if (accepted_chars[j] == '\0')
            break;
    }
    return len;
}
