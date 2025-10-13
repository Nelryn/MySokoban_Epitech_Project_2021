/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** curse
*/

#include "player.h"
#include "sokoban.h"
#include "my.h"

void get_config(char **map, player_t *player, box_t **start, hole_t **hole)
{
    noecho();
    curs_set(false);
    print_map_player(map);
    get_player(player, map, start, hole);
}

void keypad_manager(player_t *player, char **map, box_t **start, hole_t **hole)
{
    switch (getch()) {
    case KEY_DOWN:
        move_down(player, map, start);
        break;
    case KEY_UP:
        move_up(player, map, start);
        break;
    case KEY_LEFT:
        move_left(player, map, start);
        break;
    case KEY_RIGHT:
        move_right(player, map, start);
        break;
    case ' ':
        retry(map, player, start, hole);
        break;
    default:
        break;
    }
}

void my_curse(char ***map, int check)
{
    player_t *player = init_player();
    hole_t *hole = NULL;
    box_t *start = NULL;
    WINDOW *win = initscr();

    if (win != NULL) {
        keypad(win, TRUE);
        get_config(*map, player, &start, &hole);
        while (check == 0) {
            check_screen(*map, getmaxx(win), getmaxy(win));
            keypad_manager(player, *map, &start, &hole);
            check = check_lose(check, start);
            check = check_win(hole, start, check);
            refresh();
        }
    }
    free_curses(player, hole, start);
    free_tab(*map);
    endwin();
    delwin(win);
    (check == 1) ? exit(0) : exit(1);
}