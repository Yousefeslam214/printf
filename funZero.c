#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf_char(va_list args)
{
    putchar(va_arg(args, int));
    return(1);
}

int _printf_string(va_list args)
{
    int i = 0;
    char *str;
    str = va_arg(args, char *);
    while (str[i])
    {
        putchar(str[i]);
        i++;
    }
    return(1);
}

int _printf_persentage(va_list args)
{
    (void)args;
    putchar('%');
    return(1);
}
