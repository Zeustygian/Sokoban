/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** main
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

int file_exist(char *argv)
{
    int fd = 0;

    fd = open(argv, O_RDONLY);
    close(fd);
    if (fd < 0)
        return 1;
    else
        return 0;
}

char *manage_str(char **argv, map_t *map)
{
    char *map_str = NULL;
    char *map_str_unequa = NULL;

    map_str_unequa = get_map_str(argv[1], O_RDONLY);
    map->longest_line = find_longest_line(map_str_unequa);
    map->nb_lines = count_nb_line(map_str_unequa);
    map_str = equalize_str(map_str_unequa, map);
    return map_str;
}

int some_errors(int argc, char **argv)
{
    if (argc == 1)
        exit(84);
    if (argc == 2) {
        if (my_strcmp(argv[1], "-h") == 0) {
            help_map();
            exit(0);
        }
    }
    if (argc != 2)
        exit(84);
    if (check_map(argv[1], O_RDONLY) == 84)
        exit(84);
    return 0;
}

int main(int argc, char **argv)
{
    char *map_str = NULL;
    map_t *map = malloc(sizeof(map_t));
    plyr_t *plyr = malloc(sizeof(plyr_t));
    tmnl_t *tmnl = malloc(sizeof(tmnl_t));

    if (some_errors(argc, argv) == 84)
        return 84;
    map_str = manage_str(argv, map);
    if (error_case_components(map_str, plyr) == 84)
        return 84;
    map_str = remove_plyr_from_map_str(map_str);
    inits_map_pos(map, map_str, plyr);
    game_loop(map, plyr, tmnl);
    end_program(map, plyr, map_str);
}
