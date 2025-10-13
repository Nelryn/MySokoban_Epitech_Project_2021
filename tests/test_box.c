/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** test_box
*/

#include <criterion/criterion.h>
#include "player.h"

Test(create_hole, three_holes)
{
    hole_t *hole = NULL;
    hole_t *tmp = hole;

    create_hole(&hole, 3, 1);
    create_hole(&hole, 1, 1);
    create_hole(&hole, 5, 5);
    tmp = hole->next;
    cr_assert_eq(tmp->xhole, 1);
    cr_assert_eq(tmp->yhole, 1);
    free(tmp);
    free(hole);
}

Test(count_hole, nb_three)
{
    hole_t *hole = NULL;
    int res = 0;

    create_hole(&hole, 3, 1);
    create_hole(&hole, 1, 1);
    create_hole(&hole, 5, 5);
    res = count_hole(hole);
    cr_assert_eq(res, 3);
    free(hole);
}

Test(check_hole, not_equal)
{
    hole_t *hole = NULL;
    box_t *box = NULL;
    int res = 0;

    create_hole(&hole, 5, 5);
    create_hole(&hole, 0, 7);
    create_box(&box, 1, 1);
    create_box(&box, 2, 2);
    res = check_hole(hole, box);
    cr_assert_eq(res, 0);
    free(hole);
    free(box);
}

Test(check_hole, equal)
{
    hole_t *hole = NULL;
    box_t *box = NULL;
    int res = 0;

    create_hole(&hole, 1, 1);
    create_hole(&hole, 2, 3);
    create_box(&box, 1, 1);
    create_box(&box, 2, 3);
    res = check_hole(hole, box);
    cr_assert_eq(res, 1);
    free(hole);
    free(box);
}

Test(create_box, three_boxes)
{
    box_t *box = NULL;
    box_t *tmp = box;

    create_box(&box, 0, 0);
    create_box(&box, 2, 1);
    create_box(&box, 1, 3);
    tmp = box->next;
    cr_assert_eq(tmp->xbox, 2);
    cr_assert_eq(tmp->ybox, 1);
    free(tmp);
    free(box);
}

Test(count_boxes, third)
{
    box_t *box = NULL;
    int res = 0;

    create_box(&box, 0, 0);
    create_box(&box, 2, 1);
    create_box(&box, 1, 3);
    res = count_boxes(box);
    cr_assert_eq(res, 3);
    free(box);
}