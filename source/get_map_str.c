/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** get_map_str
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

char *get_map_str(char *filename, int flag)
{
    int fd = 0;
    int k = 0;
    char buffer[2048];
    char *str = NULL;

    fd = open(filename, flag);
    k = read(fd, buffer, 2048);
    buffer[k] = '\0';
    str = my_strdup(buffer);
    close(fd);
    return str;
}
