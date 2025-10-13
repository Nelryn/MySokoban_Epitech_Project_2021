/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** usage
*/

#include "my.h"
#include <stdlib.h>

void usage(void)
{
    my_printf("USAGE\n     ./my_sokoban map\nDESCRIPTION\n     map file");
    my_printf(" representing the warehouse map, containing '#' for walls, ");
    my_printf("'P' for the player, 'X' for boxes and ");
    my_printf("'O' for storage locations.\n");
    exit(0);
}