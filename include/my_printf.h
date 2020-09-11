/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** header file
*/

#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__
#include <stdarg.h>

typedef void (*ptr)(va_list vl);
typedef struct pointer
{
    char index;
    ptr fonction;
} pointer;

void print_special(unsigned int nb);
int my_printf(const char *format, ...);
int my_putnbr_base(unsigned int nbr, char const *base);
int my_showstr(char const *str);
void my_put_unsigned_nbr(unsigned int nb);
void display_number(va_list vl);
void display_percentage();
void display_string(va_list vl);
void display_character(va_list vl);
void display_octal_chara_in_string(va_list vl);
void display_unsigned_binary_number(va_list vl);
void display_unsigned_octal_number(va_list vl);
void display_unsigned_hexa_maj_number(va_list vl);
void display_unsigned_hexa_min_number(va_list vl);
void display_unsigned_decimal_number(va_list vl);
#endif
