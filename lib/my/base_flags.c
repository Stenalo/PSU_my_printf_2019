/*
** EPITECH PROJECT, 2019
** base_flags
** File description:
** flags with base conversion
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"
#include <stdarg.h>
#include <stdio.h>

void display_unsigned_decimal_number(va_list vl)
{
    my_put_unsigned_nbr(va_arg(vl, unsigned int));
}

void display_unsigned_hexa_min_number(va_list vl)
{
    my_putnbr_base(va_arg(vl, unsigned int), "0123456789abcdef");
}

void display_unsigned_hexa_maj_number(va_list vl)
{
    my_putnbr_base(va_arg(vl, unsigned int), "0123456789ABCDEF");
}

void display_unsigned_octal_number(va_list vl)
{
    my_putnbr_base(va_arg(vl, unsigned int), "01234567");
}

void display_unsigned_binary_number(va_list vl)
{
    my_putnbr_base(va_arg(vl, unsigned int), "01");
}
