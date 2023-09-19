#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_non_printable - Print a string, replacing non-printable
 *                      characters with \x followed by ASCII code.
 * @str: The input string.
 *
 * Return: Number of characters printed.
 */
int print_non_printable(va_list args)
{
    char *str = va_arg(args, char *);
    int printed_chars = 0;
    
    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            /* the other code */
        }
        else
        {
            write(1, str, 1);
            printed_chars++;
        }
        str++;
    }

    return printed_chars;
}

