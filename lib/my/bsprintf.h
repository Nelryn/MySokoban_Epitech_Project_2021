/*
** EPITECH PROJECT, 2020
** dot h
** File description:
** my_printf
*/

#ifndef BSPRINTF_H
#define BSPRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char);
void my_put_base(va_list, int, int);
void print_letters(char const *, va_list, int);
void print_hexalow(va_list);
void print_hexadup(va_list);
void print_octaly(int);
int my_put_nbr(int);
int my_putstr(char const *);
int my_putstr_format(char const *);
int my_put_unsigned_nbr(unsigned int);
int print_percent(char const *, int);

#endif
