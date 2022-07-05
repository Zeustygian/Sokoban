/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** find_longest_line
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

int find_longest_line(char *map_str)
{
    int count = 0;
    int longest_count = 0;

    for (int i = 0; map_str[i] != '\0'; i++) {
        if (map_str[i] == '\n' && (count + 1) > longest_count) {
            count++;
            longest_count = count;
            i++;
        }
        if (i > 0 && map_str[i - 1] == '\n')
            count = 0;
        count++;
    }
    return longest_count;
}
