/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** is_it_block
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

bool is_it_block(char *map, int index)
{
    if (map[index] == 'X')
        return true;
    if (map[index] == '#')
        return true;
    if (map[index] == 'O')
        return false;
    if (map[index] == ' ')
        return false;
    return false;
}
