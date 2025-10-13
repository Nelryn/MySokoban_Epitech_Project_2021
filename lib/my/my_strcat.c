/*
** EPITECH PROJECT, 2020
** a
** File description:
** h
*/

#include <string.h>

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int t = 0;

    while (dest[t] != '\0') {
        t++;
    }
    if (dest[t] == '\0') {
        while (src[i] != '\0') {
            dest[t + i] = src[i];
            i++;
        }
    }
    return (dest);
}