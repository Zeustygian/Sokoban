/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** count_nb_line
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

int count_nb_line(char *map_str)
{
    int nb_lines = 0;

    for (int i = 0; map_str[i] != '\0'; i++) {
        if (map_str[i] == '\n')
            nb_lines++;
    }
    nb_lines++;
    return nb_lines;
}
