#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_string - Print a string.
 * @args: The va_list containing the string to print.
 *
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
	int len = 0;

    if (str == NULL)
        str = "(null)";

    while (str[len])
        len++;

    return write(1, str, len);
}

