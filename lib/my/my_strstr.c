/*
** EPITECH PROJECT, 2020
** ye
** File description:
** et
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int m = 0;

    while (str[i] != '\0') {
        if (str[i] != to_find[m])
            i++;
        else {
            m++;
            i++;
        }
        if (to_find[m] == '\0') {
            return (&str[i - m]);
        }
    }
    return str;
}
