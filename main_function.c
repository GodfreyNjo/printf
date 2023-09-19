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
	char ch = 'A';
    char *str = "Hello, World!";
    int num = 42;
    unsigned int u_num = 12345;

    _printf("Character: %c\n", ch);
    _printf("String: %s\n", str);
    _printf("Integer: %d\n", num);
    _printf("Unsigned Integer: %u\n", u_num);
    _printf("Binary: %b\n", u_num);
    _printf("Hexadecimal (lowercase): %x\n", u_num);
    _printf("Hexadecimal (uppercase): %X\n", u_num);
    _printf("Reversed String: %r\n", str);
    _printf("Rot13 String: %R\n", str);

    return (0);
}
