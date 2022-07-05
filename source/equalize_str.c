/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** equalize_str
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

void condition(map_t *map, int len_str, int j, char *equalize_str)
{
    for (; (map->longest_line - len_str) != 1; j++, len_str++)
        equalize_str[j] = ' ';
}

char *equalize_str(char *map_str, map_t *map)
{
    int size = map->longest_line * map->nb_lines;
    char *equalize_str = malloc(sizeof(char) * size);
    int j = 0;
    int len_str = 0;

    for (int i = 0; map_str[i] != '\0'; i++, j++, len_str++) {
        if (i > 0 && map_str[i - 1] == '\n' && len_str > 2)
            len_str = 0;
        if (map_str[i] == '\n') {
            for (; (map->longest_line - len_str) != 1; j++, len_str++)
                equalize_str[j] = ' ';
        }
        equalize_str[j] = map_str[i];
    }
    equalize_str[j] = '\0';
    return equalize_str;
}
