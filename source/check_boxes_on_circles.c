/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** check_boxes_on_circles
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

int check_boxes_on_circles(map_t *map)
{
    int validated_boxes = 0;

    for (int i = 0; map->curr_map[i] != '\0'; i++) {
        if (map->original_map_str[i] == 'O' && map->curr_map[i] == 'X')
            validated_boxes++;
        if (validated_boxes == map->nb_circles)
            return 0;
    }
    return 1;
}
