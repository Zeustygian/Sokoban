/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** error_case_components
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

int error_case_components(char *map_str, plyr_t *plyr)
{
    if (check_nb_components(map_str) == 84)
        return 84;
    if (get_plyr_pos_from_str(map_str, plyr) == 84)
        return 84;
    return 0;
}
