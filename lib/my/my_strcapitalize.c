/*
** EPITECH PROJECT, 2021
** B-BOO-101-RUN-1-1-phoenixd02-lucas.gangnant
** File description:
** capitalize first letter of each word
*/

#include <stdio.h>
#include "my.h"

int condition(char *str, int i)
{
    if ((str[i] >= 'a' && str[i] <= 'z')
        && !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
        && !(str[i - 1] >= '0' && str[i - 1] <= '9')
        && !(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
        return (1);
    return (0);
}

int snd_condition(char *str, int i)
{
    if ((str[i] >= 'A' && str[i] <= 'Z')
        && ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
        || (str[i - 1] >= '0' && str[i - 1] <= '9')
        || (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
        return (1);
    return (0);
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (condition(str, i) == 1) {
            str[i] -= 32;
            i++;
        }
        if (snd_condition(str, i) == 1) {
            str[i] += 32;
            i++;
        } else {
            i++;
        }
    }
    return (str);
}
