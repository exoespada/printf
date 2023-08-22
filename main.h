#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct ph_convert - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */
typedef struct ph_convert
{
    char *id;
    int (*f)(va_list);
} ph_convert;

int _printf(const char * const format, ...);
int printf_string(va_list args);
int printf_37(void);
int printf_srev(va_list args);
int printf_char(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_rot13(va_list args);
int printf_bin(va_list args);
int printf_exclusive_string(va_list args);
int printf_unsigned(va_list args);
int printf_oct(va_list args);
int printf_hex(va_list args);
int printf_HEX(va_list args);
int printf_pointer(va_list args);
int _putchar(char c);

#endif

