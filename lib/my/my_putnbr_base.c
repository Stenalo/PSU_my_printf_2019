/*
** EPITECH PROJECT, 2019
** my_putnbr_base
** File description:
** print a number in a base given
*/

#include "../../include/my_printf.h"
#include "../../include/my.h"
#include <stdio.h>
#include <unistd.h>

int my_putnbr_base(unsigned int nbr, char const *base)
{
    unsigned int base_nb = my_strlen(base);
    unsigned int nb2 =  nbr % base_nb;

    if (nbr >= base_nb) {
        nbr = nbr / base_nb;
        my_putnbr_base(nbr, base);
    }
    my_putchar(base[nb2]);
    return (0);
}
