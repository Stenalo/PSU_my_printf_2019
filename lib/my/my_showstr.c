/*
** EPITECH PROJECT, 2019
** my_show_str
** File description:
** show a string and turn into hexadecimally non printable
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"

void print_special(unsigned int nb)
{
    int count = 1;

    for (count = 1; nb * count < 100; count *= 10)
        my_putchar('0');
    my_putnbr_base(nb, "01234567");
}

int my_showstr(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (!(char_is_printable(str[i]))) {
            my_putchar('\\');
            print_special((unsigned int)str[i]);
        } else {
            my_putchar(str[i]);
        }
    }
    return (0);
}

