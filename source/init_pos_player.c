/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** init_pos_plyr
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

void init_pos_plyr(plyr_t *plyr)
{
    plyr->x = plyr->starting_x;
    plyr->y = plyr->starting_y;
    plyr->previous_x = plyr->x;
    plyr->previous_y = plyr->y;
}
