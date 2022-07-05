/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** printw_column
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

void printw_column(plyr_t *plyr, map_t *map)
{
    int i = plyr->index_column;
    int y = 0;

    while (i < map->limit_read_index) {
        move(y, plyr->x);
        printw("%c", map->curr_map[i]);
        i += map->width_map;
        y++;
    }
    mvaddch(plyr->y, plyr->x, 'P');
}
