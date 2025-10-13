/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

    #include "curses.h"

    void usage();
    char *manage_map(char *s);
    void my_curse(char ***map, int);
    void check_screen(char **map, int x, int y);

#endif