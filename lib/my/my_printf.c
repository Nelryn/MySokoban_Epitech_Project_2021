/*
** EPITECH PROJECT, 2020
** my_printf main
** File description:
** libmy
*/

#include "bsprintf.h"

void print_digit(const char *s, va_list print, int i)
{
    if (s[i + 1] == 'd' || s[i + 1] == 'i')
        my_put_nbr(va_arg(print, int));
    if (s[i + 1] == 'u')
        my_put_unsigned_nbr(va_arg(print, unsigned int));
}

void print_base(char const *s, va_list print, int i)
{
    if (s[i + 1] == 'b')
        my_put_base(print, 2, 2);
    if (s[i + 1] == 'o')
        my_put_base(print, 8, 8);
}

void print_hexas(char const *s, va_list print, int i)
{
    if (s[i + 1] == 'x')
        print_hexalow(print);
    if (s[i + 1] == 'X')
        print_hexadup(print);
}

int print_params(char const *s, int i)
{
    if (s[i] != '%' && s[i] != '\0') {
        my_putchar(s[i]);
        i++;
    }
    return (i);
}

int my_printf(const char *s, ...)
{
    int i = 0;
    va_list print;

    va_start(print, s);
    while (s[i] != '\0') {
        i = print_percent(s, i);
        if (s[i] == '%') {
            print_letters(s, print, i);
            print_digit(s, print, i);
            print_base(s, print, i);
            print_hexas(s, print, i);
            i += 2;
        }
        i = print_params(s, i);
    }
    va_end(print);
    return (0);
}