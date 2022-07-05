/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** check_nb_plyr
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

int check_nb_components(char *map_str)
{
    int count_plyr = 0;
    int count_boxes = 0;
    int count_circles = 0;

    for (int i = 0; map_str[i] != '\0'; i++) {
        if (map_str[i] == 'P')
            count_plyr++;
        if (map_str[i] == 'X')
            count_boxes++;
        if (map_str[i] == 'O')
            count_circles++;
    }
    if ((count_plyr != 1)
        || (count_boxes != count_circles)
        || (count_boxes == 0 || count_circles == 0))
        return 84;
    return 0;
}
