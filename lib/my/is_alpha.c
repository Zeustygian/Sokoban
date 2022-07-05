/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-bsminishell1-lucas.gangnant
** File description:
** is_alpha
*/

#include "my.h"

int is_alpha(char c)
{
    if ((c < 'A' || c > 'Z' ) || (c < 'a' || c > 'z'))
        return 0;
    return 1;
}
