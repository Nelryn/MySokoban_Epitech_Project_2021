/*
** EPITECH PROJECT, 2021
** B-PSU-200-RUN-2-1-mysokoban-emilie.baunifais
** File description:
** test_get_player
*/

#include <criterion/criterion.h>
#include "my.h"
#include "player.h"

Test(get_player, player)
{
    player_t *player = init_player();
    box_t *box = NULL;
    hole_t *hole = NULL;
    char str[] = "#####\n#PXO#\n#####";
    char **map = str_to_word_array(str, '\n');

    get_player(player, map, &box, &hole);
    cr_assert_eq(player->x, 1);
    cr_assert_eq(player->y, 1);
    free_tab(map);
    destroy_player(player);
    free(box);
    free(hole);
}