/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** push_behind_box
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

void push_box_under(plyr_t *plyr, map_t *map)
{
    if (box_under(plyr, map->curr_map) == true
        && block_under(map->curr_map, plyr) == false) {
        map->curr_map[plyr->index_sunder] = map->curr_map[plyr->index_under];
        compare_maps(map, plyr->index_under);
        plyr->y++;
        printw_column(plyr, map);
    }
}
