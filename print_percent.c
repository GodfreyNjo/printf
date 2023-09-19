#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_percent - Print a percent symbol.
 * @args: The va_list (unused).
 *
 * Return: Always returns 1 (the number of characters printed).
 */
int print_percent(va_list args)
{
char percent = '%';
(void)args;

return (write(1, &percent, 1));
}

