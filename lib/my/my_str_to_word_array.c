/*
** EPITECH PROJECT, 2020
** str to word array
** File description:
** bsq
*/

#include <stdlib.h>

int check_nb_lines(char const *s, char sep)
{
    int count = 1;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == sep)
            count++;
        i++;
    }
    return count;
}

int new_strlen(char const *s, int i, char sep)
{
    while (s[i] != sep && s[i] != '\0') {
        i += 1;
    }
    return (i);
}

char **str_to_word_array(char *s, char sep)
{
    int h = 0;
    int v = 0;
    int j = 0;
    char **tab = NULL;

    tab = malloc(sizeof(char *) * (check_nb_lines(s, sep) + 1));
    for (; v != check_nb_lines(s, sep); h++, v++) {
        tab[v] = malloc(sizeof(char) * (new_strlen(s, h, sep) + 1));
        for (j = 0; s[h] != sep && s[h] != '\0'; h++, j++) {
            tab[v][j] = s[h];
        }
        tab[v][h] = '\0';
    }
    tab[v] = NULL;
    return (tab);
}