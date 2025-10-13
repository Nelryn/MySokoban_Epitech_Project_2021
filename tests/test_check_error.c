/*
** EPITECH PROJECT, 2021
** tests
** File description:
** unit_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "map.h"

int check_open(int fd);
void check_char(char *s);
void check_map(char *s);
char *manage_map(char *s);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(check_char, no_error, .init=redirect_all_std)
{
    char s[] = "#P#XO#";

    check_char(s);
    cr_assert_stderr_neq_str("", "");
}

Test(check_map, not_error, .init=redirect_all_std)
{
    char s[] = "#P#XO#";

    check_map(s);
    cr_assert_stderr_neq_str("", "");
}

Test(check_open, works)
{
    int fd = check_open(open("config/map", O_RDONLY));

    cr_assert_eq(fd, 12);
}

Test(manage_map, everything_ok)
{
    char res[] = "#####\n#PXO#\n#####";
    char *s = NULL;

    s = manage_map("config/map_test");
    cr_assert_str_eq(res, s);
    free(s);
}