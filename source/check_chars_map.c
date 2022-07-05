/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** check_chars_map
*/

#include "my.h"
#include "my_sokoban.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ncurses.h>

int check_chars_map(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '#'
            || buffer[i] == 'X' || buffer[i] == 'O' || buffer[i] == 'P')
            i++;
        else
            return 84;
    }
    return 0;
}
