#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_unsigned - Print an unsigned integer.
 * @args: The va_list containing the unsigned integer to print.
 *
 * Return: Number of characters printed.
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int len = snprintf(buffer, sizeof(buffer), "%u", num);

	return (write(1, buffer, len));
}

