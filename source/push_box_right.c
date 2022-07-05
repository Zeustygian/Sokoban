/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** push_box_right
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

void push_box_right(plyr_t *plyr, map_t *map)
{
    if (box_on_right(plyr, map->curr_map) == true
        && block_on_right(map->curr_map, plyr) == false) {
        map->curr_map[plyr->index + 2] = map->curr_map[plyr->index + 1];
        compare_maps(map, plyr->index + 1);
        plyr->x++;
        printw_line(plyr, map);
    }
}
