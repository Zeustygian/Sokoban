/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** check_map
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

int check_map(char *filename, int flag)
{
    int fd = 0;
    int k = 0;
    char buffer[1024];

    fd = open(filename, flag);
    if (fd == 0)
        return 84;
    k = read(fd, buffer, 1024);
    buffer[k] = '\0';
    if (check_chars_map(buffer) == 84)
        return 84;
    close(fd);
    return 0;
}
