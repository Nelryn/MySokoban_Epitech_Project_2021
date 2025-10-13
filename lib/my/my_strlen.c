/*
** EPITECH PROJECT, 2020
** easy
** File description:
** peasy
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
