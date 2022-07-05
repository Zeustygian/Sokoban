/*
** EPITECH PROJECT, 2022
** my
** File description:
** Return lengh biggr sub-string (from start original string)of non asked char
*/

#include "my.h"
#include <unistd.h>

int my_strcspn(char *str, char *acptd_chars)
{
    int len = 0;
    int j = 0;
    int i = 0;

    while (str[i] != '\0' || acptd_chars[j] != '\0') {
        if (acptd_chars[j] == '\0') {
            len++;
            i++;
            j = 0;
        }
        if (my_charcmp(str[i], acptd_chars[j]) == 0)
            j++;
        if (my_charcmp(str[i], acptd_chars[j]) == 1 || str[i] == '\0')
            break;
    }
    return len;
}
