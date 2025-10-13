/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** redimension
*/

#include "my.h"
#include <stdlib.h>
#include <curses.h>

int count_lines(char **map)
{
    int i = 0;
    int count = 0;

    while (map[i] != NULL) {
        count++;
        i++;
    }
    return count;
}

void check_screen(char **map, int x, int y)
{
    int i = 0;
    int cols = 0;
    int row = count_lines(map);

    if (row > y) {
        clear();
        mvprintw(y/2, x/2, "Enlarge your screen");
    }
    while (map[i] != NULL) {
        cols = new_strlen(map[i], i, '\n');
        if (cols > x) {
            clear();
            mvprintw(y/2, x/2, "Enlarge your screen");
        }
        i++;
    }
}