/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** player
*/

#ifndef PLAYER_H_
    #define PLAYER_H_

    #include "list.h"

    typedef struct player_s {
        int x;
        int y;
    }player_t;

    player_t *init_player(void);
    void destroy_player(player_t *player);
    void get_player(player_t *player, char **map, box_t **, hole_t **);
    void move_right(player_t *player, char **map, box_t **);
    void move_left(player_t *player, char **map, box_t **);
    void move_up(player_t *player, char **map, box_t **);
    void move_down(player_t *player, char **map, box_t **);
    void player_move_x(char **map, box_t *head, player_t *player, int nb);
    void player_move_y(char **map, box_t *head, player_t *player, int nb);
    void print_map_player(char **map);
    void print_map(char **map, box_t *);
    void print_boxes(box_t *head);
    void retry(char **map, player_t *player, box_t **start, hole_t **hole);
    int check_win(hole_t *hole, box_t *start, int check);
    int check_lose(int check, box_t *box);
    void free_curses(player_t *player, hole_t *hole, box_t *box);

#endif