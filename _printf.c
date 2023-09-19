#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}

			if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				printed_chars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
				{
					str = "(null)";
				}
				while (*str)
				{
					write(1, str, 1);
					str++;
					printed_chars++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				printed_chars++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				printed_chars += print_integer(args);
			}
			else if (*format == 'u')
			{
				printed_chars += print_unsigned(args);
			}
			else if (*format == 'o')
			{
				printed_chars += print_octal(args);
			}
			else if (*format == 'x')
			{
				printed_chars += print_hex(args);
			}
			else if (*format == 'X')
			{
				printed_chars += print_hex_upper(args);
			}
			else if (*format == 'S')
			{
				printed_chars += print_non_printable(args);
			}
		}
		else
		{
			write(1, format, 1);
			printed_chars++;
		}
		format++;
	}

	va_end(args);
	return printed_chars;
}

