/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** get_plyr_pos_from_str
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

int get_plyr_pos_from_str(char *map_str, plyr_t *plyr)
{
    plyr->starting_x = 0;
    plyr->starting_y = 0;
    for (int i = 0; map_str[i] != '\0'; i++) {
        if (map_str[i] == 'P')
            return 0;
        if (map_str[i] == '\n') {
            plyr->starting_y++;
            plyr->starting_x = 0;
            continue;
        }
        plyr->starting_x++;
    }
    return 84;
}
