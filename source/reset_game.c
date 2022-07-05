/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** reset_game
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

void reset_game(map_t *map, plyr_t *plyr)
{
    clear();
    move(0, 0);
    free(map->curr_map);
    map->curr_map = my_strdup(map->original_map_str);
    move(plyr->starting_y, plyr->starting_x);
    init_pos_plyr(plyr);
}
