/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** retry
*/

#include "player.h"

void retry(char **map, player_t *player, box_t **start, hole_t **hole)
{
    move(0, 0);
    free(*start);
    free(*hole);
    *start = NULL;
    *hole = NULL;
    print_map_player(map);
    get_player(player, map, start, hole);
    move(player->y, player->x);
}