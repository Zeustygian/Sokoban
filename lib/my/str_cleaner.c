/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** clean_str
*/

#include "my.h"

char *remove_first_spaces(char *str, char separator)
{
    int i = 0;
    int j = 0;
    char *str_copy = NULL;

    while (str[i] == separator) {
        i++;
    }
    str_copy = malloc(sizeof(char) * (my_strlen(str) - i));
    while (str[i] != '\0') {
        str_copy[j] = str[i];
        i++;
        j++;
    }
    return str_copy;
}

char *remove_last_spaces(char *str, char separator)
{
    int i = 0;
    int count = 0;
    char *str_copy = NULL;

    while (str[i] != '\0')
        i++;
    while (str[i - 1] == separator) {
        count ++;
        i--;
    }
    str_copy = malloc(sizeof(char) * (my_strlen(str) - count));
    for (int j = 0; j != (my_strlen(str) - count); j++) {
        str_copy[j] = str[j];
    }
    return str_copy;
}

int nb_spaces_than_mono(char *str, char separator)
{
    int j = 0;
    int count = 0;

    while (str[j] != '\0') {
        if (str[j] == separator && str[j + 1] == separator) {
            j++;
            count++;
        }
        if (str[j] == separator && str[j + 1] != separator) {
            j++;
        }
        j++;
    }
    return count;
}

char *set_up_mono_space(char *str, char separator)
{
    int i = 0;
    int j = 0;
    int space = nb_spaces_than_mono(str, separator);
    char *str_copy = malloc(sizeof(char) * (my_strlen(str) - space));

    while (str[j] != '\0') {
        if (str[j] == separator && str[j - 1] != separator)
            str_copy[i] = str[j];
        while (str[j] == separator && str[j + 1] == separator)
            j++;
        str_copy[i] = str[j];
        i++;
        j++;
    }
    return str_copy;
}

char *str_cleaner(char *str, char separator)
{
    char *str_cleaned = NULL;

    str_cleaned = remove_first_spaces(str, separator);
    str_cleaned = remove_last_spaces(str_cleaned, separator);
    str_cleaned = set_up_mono_space(str_cleaned, separator);
    return str_cleaned;
}
