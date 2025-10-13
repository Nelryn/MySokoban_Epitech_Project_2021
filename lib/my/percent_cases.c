/*
** EPITECH PROJECT, 2020
** special print percent
** File description:
** my_printf
*/

#include "bsprintf.h"

int print_percent(char const *s, int i)
{
    if (s[i] == '%' && s[i + 1] == '\0')
        i++;
    if (s[i + 1] == '%' && s[i] == '%')
        my_putchar('%');
    return (i);
}