/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** game_loop
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

void blocked_boxes_cond(map_t *map, int blocked_boxes)
{
    if (blocked_boxes == 1)
        map->game_blocked = true;
}

int game_loop(map_t *map, plyr_t *plyr, tmnl_t *tmnl)
{
    int blocked_boxes = 0;
    int ch = 0;

    plyr->win = 1;
    while (1) {
        check_big_enough_terminal(tmnl, map);
        sokoban(plyr, map, ch);
        if ((plyr->win = check_boxes_on_circles(map)) == 0)
            break;
        if ((blocked_boxes = check_blocked_boxes(map)) == 1)
            break;
        ch = getch();
        if (ch == ' ')
            reset_game(map, plyr);
    }
    refresh();
    endwin();
    blocked_boxes_cond(map, blocked_boxes);
    return 0;
}
