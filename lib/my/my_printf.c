/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** display stuff
*/

#include <string.h>
#include "../../include/my.h"
#include "../../include/my_printf.h"
#include <stdarg.h>
#include <stdio.h>

void display_pointer(va_list vl)
{
    my_putstr("0x");
    my_putnbr_base(va_arg(vl, unsigned int), "0123456789abcdef");
}

pointer pointer_t[] = {
    {'i', &display_number},
    {'d', &display_number},
    {'%', &display_percentage},
    {'s', &display_string},
    {'p', &display_pointer},
    {'c', &display_character},
    {'S', &display_octal_chara_in_string},
    {'o', &display_unsigned_octal_number},
    {'u', &display_unsigned_decimal_number},
    {'x', &display_unsigned_hexa_maj_number},
    {'X', &display_unsigned_hexa_maj_number},
    {'b', &display_unsigned_binary_number},
    {'\0', NULL}
};

void manage_all_flags(const char *format, va_list vl, int b)
{
    int i = 0;

    for (i = 0; pointer_t[i].index != '\0'; i++)
        if (format[b] == pointer_t[i].index)
            pointer_t[i].fonction(vl);
}

int my_printf(const char *format, ...)
{
    int i = 0;
    va_list vl;
    va_start(vl, format);

    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            manage_all_flags(format, vl, i + 1);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(vl);
    return (0);
}
