#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_integer - Print an integer.
 * @args: The va_list containing the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_integer(va_list args)
{

	int num = va_arg(args, int);

char buffer[12];
int len = snprintf(buffer, sizeof(buffer), "%d", num);
return (write(1, buffer, len));
}
