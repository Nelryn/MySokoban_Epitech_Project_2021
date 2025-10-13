/*
** EPITECH PROJECT, 2020
** jo
** File description:
** jo
*/

int my_strncmp(char *ref, char *cmp, int n)
{
    int count = 1;
    int i = 0;

    while (count != n) {
        if (ref[i] != cmp[i])
            return 1;
        count++;
        i++;
    }
    return 0;
}
