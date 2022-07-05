/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** wall_elem_array
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

bool wall_on_top(plyr_t *plyr, char **original_map)
{
    if (original_map[plyr->y - 1][plyr->x] == '#')
        return true;
    return false;
}
