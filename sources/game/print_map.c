/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** print_map
*/

#include "list.h"

char *char_to_str(char c)
{
    char *s = malloc(sizeof(char) * 2);

    s[0] = c;
    s[1] = '\0';
    return s;
}

void print_map_player(char **map)
{
    int i = 0;

    while (map[i] != NULL) {
        printw(map[i]);
        printw("\n");
        i++;
    }
}

void print_boxes(box_t *head)
{
    while (head != NULL) {
        mvprintw(head->ybox, head->xbox, "X");
        head = head->next;
    }
}

void print_map(char **map, box_t *head)
{
    int h = 0;
    int v = 0;

    while (map[v] != NULL) {
        h = 0;
        while (map[v][h] != '\0') {
            (map[v][h] != 'P' && map[v][h] != 'X') ?
            printw(char_to_str(map[v][h])) : printw(" ");
            h++;
        }
        printw("\n");
        v++;
    }
    print_boxes(head);
}