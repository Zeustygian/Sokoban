/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** compare_maps
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

void compare_maps(map_t *map, int index_zone)
{
    if (map->original_map_str[index_zone] == 'O')
        map->curr_map[index_zone] = 'O';
    else
        map->curr_map[index_zone] = ' ';
}
