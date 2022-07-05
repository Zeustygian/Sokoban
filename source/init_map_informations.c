/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** init_map_informations
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

void init_map_informations(map_t *map, char *map_str)
{
    map->curr_map = my_strdup(map_str);
    map->index_last_char_map = value_index_last_char_str(map);
    map->nb_boxes = nb_boxes(map_str);
    map->nb_circles = nb_circles(map_str);
    map->original_map_str = my_strdup(map_str);
    map->original_map = get_map_as_array(map_str);
    map->width_map = my_strlen(map->original_map[0]) + 1;
    map->length_map = length_map(map->original_map) - 1;
    map->limit_read_index = limit_index_read(map_str);
}
