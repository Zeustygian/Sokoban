/*
** EPITECH PROJECT, 2022
** stumper
** File description:
** split_a_string
*/

#include "my.h"
#include <stdlib.h>

char **my_split(char *str, char separator)
{
    char **tab = NULL;
    char *authorized_to_read = str_concat(ALPHABET, " #/,-.");
    int nb_chars = 0;
    int nb_to_skip = 0;
    int nb_words = count_words(str, separator);

    tab = malloc(sizeof(char *) * (nb_words + 1));
    for (int i = 0; i != count_words(str, separator); i++) {
        nb_chars = my_strspn(str + nb_to_skip, authorized_to_read);
        tab[i] = my_strndup(str + nb_to_skip, nb_chars);
        nb_to_skip += nb_chars + 1;
    }
    tab[nb_words] = NULL;
    return tab;
}
