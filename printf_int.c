#include "main.h"

/**
 * printf_int - Prints an integer.
 * @args: The va_list arguments.
 * 
 * Return: Number of digits printed.
 */
int printf_int(va_list args)
{
    int n = va_arg(args, int);
    int num = n;
    int digit, count = 0;
    unsigned int num_abs;

    // If number is negative, print '-' and cast to positive.
    if (num < 0)
    {
        _putchar('-');
        num_abs = -num;
    }
    else
    {
        num_abs = num;
    }

    if (num_abs == 0)
    {
        _putchar('0');
        count++;
    }

    // Count the number of digits to print.
    while (num != 0)
    {
        count++;
        num /= 10;
    }

    // Recursive function to print the number
    print_number(num_abs);

    return count;
}

void print_number(unsigned int n)
{
    if (n == 0)
        return;

    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

