/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** print numbers
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
    return (0);
}
