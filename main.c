/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** main
*/

#include "sokoban.h"
#include "my.h"
#include <stdlib.h>

int main(int ac , char **av)
{
    char *buffer = NULL;
    char **map = NULL;
    int check = 0;

    if (ac != 2)
        exit(84);
    if (my_strcmp(av[1], "-h") == 0)
        usage();
    else {
        buffer = manage_map(av[1]);
        map = str_to_word_array(buffer, '\n');
        free(buffer);
        my_curse(&map, check);
    }
    return 0;
}