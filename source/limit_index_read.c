/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** limit_index_read
*/

#include "my.h"
#include "my_sokoban.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
#include <ncurses.h>

int limit_index_read(char *map_str)
{
    int limit_index = 0;

    for (int i = 0; map_str[i] != '\0'; i++)
        limit_index++;
    return limit_index;
}
