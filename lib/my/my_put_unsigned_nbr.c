/*
** EPITECH PROJECT, 2020
** my_put_unsigned_nbr
** File description:
** my_printf
*/

void my_putchar(char c);

int my_put_unsigned_nbr(unsigned int nb)
{
    int i = 1;

    while ((nb / i) >= 10) {
        i = i * 10;
    }
    while (i > 0) {
        my_putchar((nb / i) % 10 + '0');
        i = i / 10;
    }
    return (0);
}