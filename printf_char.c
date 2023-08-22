#include "main.h"

/**
 * printf_char - prints a character
 * @args: argument to print
 * 
 * Return: number of characters printed
 */
int printf_char(va_list args)
{
    char c;

    c = (char) va_arg(args, int);

    _putchar(c);

    return (1);
}

