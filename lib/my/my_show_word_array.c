/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-emilie.baunifais
** File description:
** my_show_word_array
*/

#include <stdlib.h>

int my_printf(const char *s, ...);

void my_show_word_array(char **tab)
{
    int i = 0;

    if (tab == NULL)
        return;
    while (tab[i] != NULL) {
        my_printf("%s\n", tab[i]);
        i++;
    }
}