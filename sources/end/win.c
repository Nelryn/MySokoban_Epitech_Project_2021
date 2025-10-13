/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** win
*/

#include "list.h"

int check_win(hole_t *hole, box_t *start, int check)
{
    if (check_hole(hole, start) == 1)
        check = 1;
    return check;
}