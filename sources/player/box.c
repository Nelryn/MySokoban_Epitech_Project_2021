/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** box
*/

#include "player.h"

void create_hole(hole_t **head, int x, int y)
{
    hole_t *hole = malloc(sizeof(hole_t));
    hole_t *tmp = *head;

    hole->xhole = x;
    hole->yhole = y;
    hole->next = NULL;
    if (*head == NULL)
        *head = hole;
    else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = hole;
    }
}

void create_box(box_t **start, int x, int y)
{
    box_t *box = malloc(sizeof(box_t));
    box_t *tmp = *start;

    box->xbox = x;
    box->ybox = y;
    box->next = NULL;
    if (*start == NULL)
        *start = box;
    else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = box;
    }
}

int count_hole(hole_t *hole)
{
    int count = 0;

    while (hole != NULL) {
        count++;
        hole = hole->next;
    }
    return count;
}

int check_hole(hole_t *hole, box_t *start)
{
    int count = 0;
    int nb_hole = count_hole(hole);
    box_t *box = start;

    while (hole != NULL) {
        box = start;
        while (box != NULL) {
            count += (box->xbox == hole->xhole && box->ybox == hole->yhole) ?
            1 : 0;
            box = box->next;
        }
        hole = hole->next;
    }
    return (count == nb_hole) ? 1 : 0;
}

int count_boxes(box_t *box)
{
    int count = 0;

    while (box != NULL) {
        count++;
        box = box->next;
    }
    return count;
}