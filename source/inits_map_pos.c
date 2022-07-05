/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** inits_map_pos
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

void inits_map_pos(map_t *map, char *map_str, plyr_t *plyr)
{
    init_map_informations(map, map_str);
    init_pos_plyr(plyr);
    initscr();
    curs_set(0);
    move(plyr->starting_y, plyr->starting_x);
    keypad(stdscr, TRUE);
}
