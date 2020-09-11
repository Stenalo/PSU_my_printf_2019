/*
** EPITECH PROJECT, 2019
** put_unsigned_number
** File description:
** print unsigned number
*/

#include "../../include/my_printf.h"
#include "../../include/my.h"

void my_put_unsigned_nbr(unsigned int nb)
{
    unsigned long mult = 1;
    int res;

    for (; nb / mult >= 10; mult *= 10);
    for (; mult > 0; mult /= 10) {
        res = nb / mult;
        my_putchar(res + '0');
        nb -= res * mult;
    }
}
