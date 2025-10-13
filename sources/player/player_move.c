/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** player_move
*/

#include "player.h"

void player_move_x(char **map, box_t *head, player_t *player, int nb)
{
    clear();
    print_map(map, head);
    player->x += nb;
    mvprintw(player->y, player->x, "P");
    move(player->y, player->x);
}

void player_move_y(char **map, box_t *head, player_t *player, int nb)
{
    clear();
    print_map(map, head);
    player->y += nb;
    mvprintw(player->y, player->x, "P");
    move(player->y, player->x);
}