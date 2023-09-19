#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_octal - Print an integer as an octal number.
 * @args: The va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_octal(va_list args)
{
	int len = 0;
    char buffer[12];
	 (void)args;
    return write(1, buffer, len);
}

