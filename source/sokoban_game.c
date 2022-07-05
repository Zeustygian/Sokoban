/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** sokoban_game
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

void sokoban(plyr_t *plyr, map_t *map, int ch)
{
    clear();
    draw_map(map);
    key_inputs_and_blocks(ch, plyr, map);
    plyr_pos_into_str_index(plyr, map);
}
