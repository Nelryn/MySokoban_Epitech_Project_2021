/*
** EPITECH PROJECT, 2020
** my_putnbr
** File description:
** libmy
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int i = 1;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    while ((nb / i) >= 10) {
        i = i * 10;
    }
    while (i > 0) {
        my_putchar((nb / i) % 10 + '0');
        i = i / 10;
    }
    return (0);
}