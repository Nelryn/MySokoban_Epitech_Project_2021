/*
** EPITECH PROJECT, 2020
** get me a number
** File description:
** gotcha
*/

int pair_or_not(char const *str, int *i)
{
    int count = 0;

    while ((str[*i] != '\0' && str[*i] == '-') ||
           (str[*i] == '+')) {
        if (str[*i] == '-')
            count++;
        (*i)++;
    }
    return (count);
}

int my_getnbr(char *str)
{
    int nb = 0;
    int i = 0;
    int res = pair_or_not(str, &i);

    res = res % 2;
    while (str[i] != '\0') {
        if ((str[i] >= '0') && (str[i] <= '9'))
            nb = str[i] - 48 + (nb * 10);
        else
            break;
        i++;
    }
    if (res == 1)
        nb *= (-1);
    return (nb);
}
