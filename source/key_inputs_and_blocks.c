/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** key_input_and_blocks
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

void  switch_keys(int ch, plyr_t *plyr, map_t *map)
{
    switch (ch) {
        case KEY_RIGHT:
            walk_right(plyr, map);
            push_box_right(plyr, map);
            break;
        case KEY_LEFT:
            walk_left(plyr, map);
            push_box_left(plyr, map);
            break;
        case KEY_UP:
            walk_up(plyr, map);
            push_box_up(plyr, map);
            break;
        case KEY_DOWN:
            walk_under(plyr, map);
            push_box_under(plyr, map);
            break;
    }
    refresh();
}

int key_inputs_and_blocks(int ch, plyr_t *plyr, map_t *map)
{
    switch_keys(ch, plyr, map);
    mvaddch(plyr->y, plyr->x, 'P');
    return 0;
}
