/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** check_blocked_boxes
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

void conditions_one(map_t *map, int i)
{
    for (int j = 0; j != 1; j++) {
        if ((map->curr_map[i] == 'X')
            && (is_it_block(map->curr_map, i - map->width_map) == true)
            && (is_it_block(map->curr_map, i + 1) == true)) {
            map->blocked_boxes++;
            continue;
        }
        if ((map->curr_map[i] == 'X')
            && (is_it_block(map->curr_map, i + 1) == true)
            && (is_it_block(map->curr_map, i + map->width_map) == true)) {
            map->blocked_boxes++;
            continue;
        }
    }
}

void conditions_two(map_t *map, int i)
{
    for (int j = 0; j != 1; j++) {
        if ((map->curr_map[i] == 'X')
            && (is_it_block(map->curr_map, i + map->width_map) == true)
            && (is_it_block(map->curr_map, i - 1) == true)) {
            map->blocked_boxes++;
            continue;
        }
        if ((map->curr_map[i] == 'X')
            && (is_it_block(map->curr_map, i - 1) == true)
            && (is_it_block(map->curr_map, i - map->width_map) == true)) {
            map->blocked_boxes++;
            continue;
        }
    }
}

int check_blocked_boxes(map_t *map)
{
    map->blocked_boxes = 0;

    for (int i = 0; map->curr_map[i] != '\0'; i++) {
        conditions_one(map, i);
        conditions_two(map, i);
    }
    if (map->blocked_boxes == map->nb_boxes) {
        return 1;
    }
    return 0;
}
