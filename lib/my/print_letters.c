/*
** EPITECH PROJECT, 2020
** print letters
** File description:
** my_printf
*/

#include "bsprintf.h"

void print_octaly(int s)
{
    int nb = s;
    int j = 8;

    while ((nb / j) >= 8) {
        j = j * 8;
    }
    while (j != 0) {
        my_putchar((nb / j) % 8 + '0');
        j /= 8;
    }
}

int my_putstr_format(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] < 127) {
            my_putchar(str[i]);
        } else {
            my_putchar(92);
            print_octaly(str[i]);
        }
        i = i + 1;
    }
    return (0);
}

void print_letters(char const *s, va_list print, int i)
{
    if (s[i + 1] == 'c')
        my_putchar(va_arg(print, int));
    if (s[i + 1] == 's')
        my_putstr(va_arg(print, char *));
    if (s[i + 1] == 'S')
        my_putstr_format(va_arg(print, void *));
}
