/*
** EPITECH PROJECT, 2022
** my
** File description:
** my
*/

#include <stdlib.h>
#include <stdio.h>

#ifndef MY_H
    #define MY_H
    #define ALPHABET "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

    void my_putchar(char c);
    int my_put_digit(int i);
    int my_charcmp(char c1, char c2);
    int display_alphabet(void);
    void my_swap(int *a,int *b);
    int my_strlen(char const *str);
    int my_strcmp(char const *s1, char const *s2);
    int is_alpha(char c);
    int count_words(char *str, char separator);
    int is_alphanum(char c);
    char *my_strdup(char *src);
    char *my_strndup(char *str, int n);
    int is_prime_number(int nb);
    char *my_strcpy(char *src, char *dest);
    int my_strncmp(char const *s1, char const *s2, int n);
    int iterative_factorial(int nb);
    char *my_strstr(char *str, char *to_find);
    int recursive_power(int nb, int p);
    char *reverse_string(char *str);
    char *str_concat(char *dest, char const *src);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int show_combinations(int nb);
    int my_isneg (int n);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_str_isnum(char const *str);
    char *my_strncpy(char *dest,char const *src,int n);
    int my_strspn(char *str, char *accepted_chars);
    int my_strcspn(char *str, char *acptd_chars);
    int palindrome_guesser(char *str);
    char **my_split(char *str, char separator);
    void my_putstr_err(char *message);
    char *str_cleaner(char *str, char separator);

#endif
