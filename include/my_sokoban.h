/*
** EPITECH PROJECT, 2022
** B-PSU-200-RUN-2-1-mysokoban-lucas.gangnant
** File description:
** my_sokoban
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef MY_SOKOBAN_H
    #define MY_SOKOBAN_H

    typedef struct tmnl_s {
        int width;
        int length;
    } tmnl_t;

    typedef struct map_s {
        char **original_map;
        char *original_map_str;
        char *curr_map;
        int width_map;
        int length_map;
        int limit_read_index;
        int nb_circles;
        int nb_boxes;
        int nb_lines;
        int longest_line;
        int blocked_boxes;
        bool game_blocked;
        int index_last_char_map;
    } map_t;

    typedef struct plyr_s {
        int x;
        int y;
        int previous_x;
        int previous_y;
        int starting_x;
        int starting_y;
        int index;
        int index_start_line;
        int index_column;
        int index_saved;
        int index_top;
        int index_stop;
        int index_under;
        int index_sunder;
        int win;
    } plyr_t;

    void check_size_terminal(tmnl_t *tmnl);
    int count_nb_line(char *map_str);
    int value_index_last_char_str(map_t *map);
    bool is_it_block(char *map, int index);
    void help_map(void);
    int check_nb_components(char *map_str);
    int check_chars_map(char *buffer);
    int check_map(char *filename, int flag);
    int get_plyr_pos_from_str(char *str, plyr_t *plyr);
    int error_case_components(char *map_str, plyr_t *plyr);
    bool wall_on_top(plyr_t *plyr, char **original_map);
    bool wall_under(plyr_t *plyr, char **original_map);
    bool wall_on_right(plyr_t *plyr, char **original_map);
    bool wall_on_left(plyr_t *plyr, char **original_map);
    void draw_map(map_t *map);
    void printw_column(plyr_t *plyr, map_t *map);
    void printw_line(plyr_t *plyr, map_t *map);
    void walk_right(plyr_t *plyr, map_t *map);
    void walk_left(plyr_t *plyr, map_t *map);
    void walk_up(plyr_t *plyr, map_t *map);
    void walk_under(plyr_t *plyr, map_t *map);
    void push_box_right(plyr_t *plyr, map_t *map);
    void push_box_left(plyr_t *plyr, map_t *map);
    void push_box_up(plyr_t *plyr, map_t *map);
    void push_box_under(plyr_t *plyr, map_t *map);
    int key_inputs_and_blocks(int ch, plyr_t *plyr, map_t *map);
    void plyr_pos_into_str_index(plyr_t *plyr, map_t *map);
    void sokoban(plyr_t *plyr, map_t *map, int ch);
    bool block_on_top(char *curr_map, plyr_t *plyr);
    bool block_under(char *curr_map, plyr_t *plyr);
    bool block_on_right(char *curr_map, plyr_t *plyr);
    bool block_on_left(char *curr_map, plyr_t *plyr);
    bool box_on_top(plyr_t *plyr, char *curr_map);
    bool box_under(plyr_t *plyr, char *curr_map);
    bool box_on_right(plyr_t *plyr, char *curr_map);
    bool box_on_left(plyr_t *plyr, char *curr_map);
    char *get_map_str(char *filename, int flag);
    char *equalize_str(char *map_str, map_t *map);
    char *remove_plyr_from_map_str(char *map_str);
    char **get_map_as_array(char *buffer);
    int length_map(char **original_map);
    int limit_index_read(char *map_str);
    int nb_boxes(char *map_str);
    int nb_circles(char *map_str);
    int find_longest_line(char *map_str);
    void check_big_enough_terminal(tmnl_t *tmnl, map_t *map);
    void init_pos_plyr(plyr_t *plyr);
    void init_map_informations(map_t *map, char *map_str);
    void inits_map_pos(map_t *map, char *map_str, plyr_t *plyr);
    void compare_maps(map_t *map, int index_zone);
    int check_boxes_on_circles(map_t *map);
    int check_blocked_boxes(map_t *map);
    void reset_game(map_t *map, plyr_t *plyr);
    int game_loop(map_t *map, plyr_t *plyr, tmnl_t *tmnl);
    void free_all(map_t *map, plyr_t *plyr, char *map_str);
    void end_program(map_t *map, plyr_t *plyr, char *map_str);

#endif
