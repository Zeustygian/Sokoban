/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-bsminishell1-lucas.gangnant
** File description:
** is_alpha_num
*/

#include "my.h"

int is_alphanum(char c)
{
    if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
        || (c >= 'A' && c <= 'Z')) {
        return (0);
    }
    return (1);
}
