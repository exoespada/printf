#include "main.h"

/**
 * _printf - Custom implementation of the printf function.
 * @format: The format string that specifies how to format the arguments.
 * Return: Number of characters printed.
 */
int _printf(const char * const format, ...)
{
    ph_convert ph[] = {
        {"%s", printf_string},
        {"%c", printf_char},
        {"%%", printf_37},
        {"%i", printf_int},
        {"%d", printf_dec},
        {"%r", printf_srev},
        {"%R", printf_rot13},
        {"%b", printf_bin},
        {"%u", printf_unsigned},
        {"%o", printf_oct},
        {"%x", printf_hex},
        {"%X", printf_HEX},
        {"%S", printf_exclusive_string},
        {"%p", printf_pointer},
        {NULL, NULL}
    };

    va_list args;
    int i = 0, j, len = 0;

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        j = 0;
        while (ph[j].id != NULL)
        {
            if (ph[j].id[0] == format[i] && ph[j].id[1] == format[i + 1])
            {
                len += ph[j].f(args);
                i = i + 2;
                break;
            }
            j++;
        }
        if (ph[j].id == NULL)
        {
            _putchar(format[i]);
            len++;
            i++;
        }
    }

    va_end(args);
    return (len);
}

