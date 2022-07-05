/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** block_top
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

bool block_on_top(char *curr_map, plyr_t *plyr)
{
    if (curr_map[plyr->index_stop] == ' '
        || curr_map[plyr->index_stop] == 'O')
        return false;
    return true;
}
