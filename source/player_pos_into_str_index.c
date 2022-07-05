/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** plyr_pos_into_str_index
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

void plyr_pos_into_str_index(plyr_t *plyr, map_t *map)
{
    plyr->index = (plyr->y * map->width_map) + plyr->x;
    plyr->index_start_line = plyr->y * map->width_map;
    plyr->index_column = map->width_map - (map->width_map - plyr->x);
    plyr->index_saved = plyr->index;
    plyr->index_top = (plyr->index - map->width_map);
    plyr->index_stop = (plyr->index - (map->width_map * 2));
    plyr->index_under = (plyr->index + map->width_map);
    plyr->index_sunder = (plyr->index + (map->width_map * 2));
}
