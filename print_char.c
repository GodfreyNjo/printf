#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_char(va_list args)
{
    char c = va_arg(args, int);
    return write(1, &c, 1);
}
