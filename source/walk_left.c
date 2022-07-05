/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** walk_left
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

void walk_left(plyr_t *plyr, map_t *map)
{
    if (wall_on_left(plyr, map->original_map) == false
        && box_on_left(plyr, map->curr_map) == false) {
        plyr->previous_x = plyr->x;
        plyr->x--;
        mvaddch(plyr->y, plyr->x, 'P');
    }
}
