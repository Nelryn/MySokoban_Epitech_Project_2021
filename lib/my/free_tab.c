/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** free_tab
*/

#include <stdlib.h>

void free_tab(char **tab)
{
    int i = 0;

    if (tab ==  NULL)
        return;
    while (tab[i] != NULL) {
        free(tab[i]);
        i++;
    }
    free(tab);
}