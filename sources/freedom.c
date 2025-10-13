/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** freedom
*/

#include "player.h"

void free_curses(player_t *player, hole_t *hole, box_t *box)
{
    destroy_player(player);
    free(hole);
    free(box);
}