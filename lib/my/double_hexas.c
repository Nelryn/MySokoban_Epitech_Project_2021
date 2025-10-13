/*
** EPITECH PROJECT, 2020
** hexadecimal
** File description:
** my_printf
*/

#include "bsprintf.h"

void print_hexalow(va_list print)
{
    int nb = 0;
    int res = 0;
    int j = 16;

    nb = va_arg(print, unsigned int);
    while ((nb / j) >= 16) {
        j = j * 16;
    }
    while (j != 0) {
        res = res + (nb / j) % 16;
        j /= 16;
    }
    if (res >= 10)
        res += 87;
    else
        res += '0';
    my_putchar(res);
}

void print_hexadup(va_list print)
{
    int nb = 0;
    int res = 0;
    int j = 16;

    nb = va_arg(print, unsigned int);
    while ((nb / j) >= 16) {
        j = j * 16;
    }
    while (j != 0) {
        res = res + (nb / j) % 16;
        j /= 16;
    }
    if (res >= 10)
        res += 55;
    else
        res += '0';
    my_putchar(res);
}