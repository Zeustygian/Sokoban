/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** check_big_enough_terminal
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

void check_big_enough_terminal(tmnl_t *tmnl, map_t *map)
{
    char *str = "Enlarge the terminal please.\n";

    check_size_terminal(tmnl);
    if (tmnl->length < map->width_map
        || tmnl->width < map->longest_line) {
        mvaddstr(tmnl->length / 2, tmnl->width / 2, str);
    }
}
