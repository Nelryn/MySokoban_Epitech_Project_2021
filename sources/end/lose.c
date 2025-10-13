/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** lose
*/

#include "player.h"

int check_walls(int x, int y)
{
    int wall = 0;

    wall += (mvinch((y + 1), x) == '#') ? 1 : 0;
    wall += (mvinch((y - 1), x) == '#') ? 1 : 0;
    wall += (mvinch(y, (x + 1)) == '#') ? 1 : 0;
    wall += (mvinch(y, (x - 1)) == '#') ? 1 : 0;
    if (mvinch((y + 1), x) == '#' && mvinch((y - 1), x) == '#' && wall == 2)
        wall = 0;
    if (mvinch(y, (x + 1)) == '#' && mvinch(y, (x - 1)) == '#' && wall == 2)
        wall = 0;
    return (wall >= 2) ? 2 : 0;
}

int check_lose(int check, box_t *box)
{
    int count = 0;
    int nb_box = count_boxes(box);

    while (box != NULL) {
        if (check_walls(box->xbox, box->ybox) == 2)
            count++;
        box = box->next;
    }
    if (count == nb_box)
        check = 2;
    return check;
}