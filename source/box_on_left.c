/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** box_on_left
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

bool box_on_left(plyr_t *plyr, char *curr_map)
{
    if (curr_map[plyr->index - 1] == 'X')
        return true;
    return false;
}
