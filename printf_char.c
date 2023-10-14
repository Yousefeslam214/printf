#include "main.h"

int _printf_char(va_list args)
{
    putchar(va_arg(args, int));
    return(1);
}
