/*
** EPITECH PROJECT, 2019
** basis_flags
** File description:
** main my_printf flags
*/

#include "../../include/my.h"
#include "../../include/my_printf.h"
#include <stdarg.h>
#include <stdio.h>

void display_character(va_list vl)
{
    my_putchar(va_arg(vl, int));
}

void display_string(va_list vl)
{
    my_putstr(va_arg(vl, char *));
}

void display_number(va_list vl)
{
    my_put_nbr(va_arg(vl, int));
}

void display_percentage(void)
{
    my_putchar('%');
}

void display_octal_chara_in_string(va_list vl)
{
    my_showstr(va_arg(vl, char *));
}
