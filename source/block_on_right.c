/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** block_on_right
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

bool block_on_right(char *curr_map, plyr_t *plyr)
{
    if (curr_map[plyr->index + 2] == ' '
        || curr_map[plyr->index + 2] == 'O')
        return false;
    return true;
}
