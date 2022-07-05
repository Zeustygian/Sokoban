/*
** EPITECH PROJECT, 2022
** stumper
** File description:
** palindrome or not
*/

#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int palindrome_guesser(char *str)
{
    int len_str = my_strlen(str);

    for (int i = 0; i != len_str; i++) {
        if (my_charcmp(str[i], str[len_str - i - 1]) != 1)
            return 1;
    }
    return 0;
}
