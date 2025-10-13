/*
** EPITECH PROJECT, 2020
** put_nbr depends on given base
** File description:
** my_printf
*/

#include "bsprintf.h"

void my_put_base(va_list print, int j, int base)
{
    int nb = 0;

    nb = va_arg(print, unsigned int);
    while ((nb / j) >= base) {
        j = j * base;
    }
    while (j != 0) {
        my_putchar((nb / j) % base + '0');
        j /= base;
    }
}