/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** remove_plyr_from_map_str
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

char *remove_plyr_from_map_str(char *map_str)
{
    char *map_str_p_less = malloc(sizeof(char) * my_strlen(map_str));
    int i = 0;

    while ( map_str[i] != '\0') {
        if (map_str[i] == 'P') {
            map_str_p_less[i] = ' ';
        }
        if (map_str[i] != 'P')
            map_str_p_less[i] = map_str[i];
        i++;
    }
    map_str_p_less[i] = '\0';
    return map_str_p_less;
}
