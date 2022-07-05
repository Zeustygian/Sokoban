/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** err_wrong_chars
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

void help_map(void)
{
    my_putstr("USAGE\n\t./my_sokoban map\nDESCRIPTION\n");
    my_putstr("\tmap  file representing the warehouse map, containing");
    my_putstr(" for walls,\n\t     \'P\' for the player, \'X\' for boxes");
    my_putstr(" and \'O\' for storage locations.\n");
}
