/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-emilie.baunifais
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char *src)
{
    char *s = malloc(sizeof(char) * (my_strlen(src) + 1));

    s = my_strcpy(s, src);
    return s;
}