/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** end_program
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

void end_program(map_t *map, plyr_t *plyr, char *map_str)
{
    if (map->game_blocked == true) {
        free_all(map, plyr, map_str);
        exit (1);
    } else {
        free_all(map, plyr, map_str);
        exit (0);
    }
}
