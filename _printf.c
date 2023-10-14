#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...)
{
    int i, j;
    int len = 0;

    va_list args;
    fun_job_s_t ob[] = {
        {'c',_printf_char},
        {'s', _printf_string},
        {'%', _printf_persentage},
        {'d', _printf_int_main},
        {'i', _printf_int_main}
    };
    va_start(args, format);
    for (i = 0; format[i]; i++)
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            len++;
        }
        else
            for (j = 0; ob[j].s;j++)
            {
                if ((ob[j].s) == format[i + 1])
                {
                    len += ob[j].f(args);
                    i++;
                }
            }
    }
    va_end(args);
    
    return (len);
}
