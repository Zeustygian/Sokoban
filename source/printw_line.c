/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** printw_line
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

void printw_line(plyr_t *plyr, map_t *map)
{
    move(plyr->y, 0);
    for (int i = plyr->index_start_line; map->curr_map[i] != '\n'; i++)
        printw("%c", map->curr_map[i]);
    mvaddch(plyr->y, plyr->x, 'P');
}
