/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** player
*/

#include "player.h"

player_t *init_player(void)
{
    player_t *player = malloc(sizeof(player_t));

    player->x = 0;
    player->y = 0;
    return player;
}

void get_player(player_t *player, char **map, box_t **start, hole_t **hole)
{
    int row = 0;
    int col = 0;

    while (map[row] != NULL) {
        col = 0;
        while (map[row][col] != '\0') {
            (map[row][col] == 'P') ? player->x = col, player->y = row : 0;
            (map[row][col] == 'X') ? create_box(start, col, row) : 0;
            (map[row][col] == 'O') ? create_hole(hole, col, row) : 0;
            col++;
        }
        row++;
    }
}

void destroy_player(player_t *player)
{
    player->x = 0;
    player->x = 0;
    free(player);
}