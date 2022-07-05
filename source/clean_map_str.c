/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** clean_map_str
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

char *clean_map_str(char *map_str)
{
    int i = 0;
    char *clean_str = malloc(sizeof(char) * my_strlen(map_str));

    while (map_str[i] != '\0') {
        if (map_str[i] == 'P') {
            clean_str[i] = ' ';
            i++;
        }
        clean_str[i] = map_str[i];
        i++;
    }
    clean_str[i] = '\0';
    return clean_str;
}
