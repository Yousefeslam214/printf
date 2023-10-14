#include "main.h"

int _printf_string(va_list args)
{
    int i = 0;
    char *str;
    str = va_arg(args, char *);
    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    return(1);
}
