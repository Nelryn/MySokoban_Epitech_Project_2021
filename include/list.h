/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** list
*/

#ifndef LIST_H_
    #define LIST_H_

    #include <stdlib.h>
    #include <curses.h>

    typedef struct box_s {
        int xbox;
        int ybox;
        struct box_s *next;
    }box_t;

    typedef struct hole_s {
        int xhole;
        int yhole;
        struct hole_s *next;
    }hole_t;

    void create_box(box_t **start, int x, int y);
    void create_hole(hole_t **head, int x, int y);
    int count_boxes(box_t *box);
    int count_hole(hole_t *hole);
    int check_hole(hole_t *hole, box_t *);

#endif