/*
** EPITECH PROJECT, 2022
** B-PSU-101-RUN-1-1-minishell1-lucas.gangnant
** File description:
** my_putstr_err
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putstr_err(char *message)
{
    write(2, message, my_strlen(message));
}
