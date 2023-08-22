#include "main.h"

/**
 * printf_string - prints a string
 * @args: argument to print
 * 
 * Return: number of characters printed
 */
int printf_string(va_list args)
{
    char *str;
    int i = 0;

    str = va_arg(args, char *);

    if (str == NULL)
        str = "(null)";

    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }

    return (i);
}

