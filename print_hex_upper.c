#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_hex_upper - Print an unsigned integer in uppercase hexadecimal format.
 * @args: The va_list containing the argument.
 *
 * Return: Number of characters printed.
 */
int print_hex_upper(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    char buffer[20];
    int len = snprintf(buffer, sizeof(buffer), "%X", num);
    write(1, buffer, len);
    return len;
}

