/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** move
*/

#include "player.h"

void move_right(player_t *player, char **map, box_t **head)
{
    box_t *tmp = *head;

    if (mvinch(player->y, (player->x + 1)) == ' ' ||
        mvinch(player->y, (player->x + 1)) == 'O')
        player_move_x(map, *head, player, 1);
    else if (mvinch(player->y, (player->x + 1)) == 'X' &&
    (mvinch(player->y, (player->x + 2)) == ' ' ||
    mvinch(player->y, (player->x + 2)) == 'O')) {
        clear();
        while (tmp != NULL) {
            (tmp->xbox == (player->x + 1) && tmp->ybox == player->y) ?
                tmp->xbox += 1 : 0;
            tmp = tmp->next;
        }
        print_map(map, *head);
        player->x += 1;
        mvprintw(player->y, player->x, "P");
        mvprintw((player->y), (player->x + 1), "X");
    }
}

void move_left(player_t *player, char **map, box_t **head)
{
    box_t *tmp = *head;

    if (mvinch(player->y, (player->x - 1)) == ' ' ||
        mvinch(player->y, (player->x - 1)) == 'O')
        player_move_x(map, *head, player, (-1));
    else if (mvinch(player->y, (player->x - 1)) == 'X' &&
    (mvinch(player->y, (player->x - 2)) == ' ' ||
    mvinch(player->y, (player->x - 2)) == 'O')) {
        clear();
        while (tmp != NULL) {
            (tmp->xbox == (player->x - 1) && tmp->ybox == player->y) ?
                tmp->xbox -= 1 : 0;
            tmp = tmp->next;
        }
        print_map(map, *head);
        player->x -= 1;
        mvprintw(player->y, player->x, "P");
        mvprintw((player->y), (player->x - 1), "X");
    }
}

void move_up(player_t *player, char **map, box_t **head)
{
    box_t *tmp = *head;

    if (mvinch((player->y - 1), player->x) == ' ' ||
        mvinch((player->y - 1), player->x) == 'O')
        player_move_y(map, *head, player, (-1));
    else if (mvinch((player->y - 1), player->x) == 'X' &&
    (mvinch((player->y - 2), player->x) == ' ' ||
    mvinch((player->y - 2), player->x) == 'O')) {
        clear();
        while (tmp != NULL) {
            (tmp->xbox == player->x && tmp->ybox == (player->y - 1)) ?
                tmp->ybox -= 1 : 0;
            tmp = tmp->next;
        }
        print_map(map, *head);
        player->y -= 1;
        mvprintw(player->y, player->x, "P");
        mvprintw((player->y - 1), (player->x), "X");
    }
}

void move_down(player_t *player, char **map, box_t **head)
{
    box_t *tmp = *head;

    if (mvinch((player->y + 1), player->x) == ' ' ||
        mvinch((player->y + 1), player->x) == 'O')
        player_move_y(map, *head, player, 1);
    else if (mvinch((player->y + 1), player->x) == 'X' &&
    (mvinch((player->y + 2), player->x) == ' ' ||
    mvinch((player->y + 2), player->x) == 'O')) {
        clear();
        while (tmp != NULL) {
            (tmp->xbox == player->x && tmp->ybox == (player->y + 1)) ?
                tmp->ybox += 1 : 0;
            tmp = tmp->next;
        }
        print_map(map, *head);
        player->y += 1;
        mvprintw(player->y, player->x, "P");
        mvprintw((player->y + 1), (player->x), "X");
    }
}