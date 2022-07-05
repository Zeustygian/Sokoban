/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** get_plyr_pos_from_arr
*/

#include "my.h"
#include "my_sokoban.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ncurses.h>

int get_plyr_pos_from_arr(char **original_map, plyr_t *plyr)
{
    int y = 0;
    int x = 0;
    while (original_map[y][x] != 'P' || original_map[y] != NULL) {
        if (original_map[y][x] == '\0') {
            y++;
            plyr->starting_y++;
            x = 0;
            plyr->starting_x = 0;
        }
        if (original_map[y][x] == 'P')
            return 0;
        x++;
        plyr->starting_x++;
    }
    return 84;
}
