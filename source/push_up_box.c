/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** push_top_box
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

void push_box_up(plyr_t *plyr, map_t *map)
{
    if (box_on_top(plyr, map->curr_map) == true
        && block_on_top(map->curr_map, plyr) == false) {
        map->curr_map[plyr->index_stop] = map->curr_map[plyr->index_top];
        compare_maps(map, plyr->index_top);
        plyr->y--;
        printw_column(plyr, map);
    }
}
