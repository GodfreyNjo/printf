#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int characters_printed = 0;
	char buffer[1024];
	int printed_chars;

	characters_printed = _printf("Hello, world!\n");

	printed_chars = _printf("Characters printed: %d\n", characters_printed);

	sprintf(buffer, "Characters printed: %d\n", printed_chars);
	write(1, buffer, printed_chars);

	return (0);
}

