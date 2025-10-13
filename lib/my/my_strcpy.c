/*
** EPITECH PROJECT, 2020
** g
** File description:
** d
*/

char *my_strcpy(char *dest, char const *src)
{
    int c = 0;

    while (src[c] != '\0') {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return (dest);
}
