#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct fun_job
{
    char s;
    int (*f)(va_list);
    
}fun_job_s_t;

/*tools
int _putchar(char c);
int _puts(char *str);
*/
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_persentage();


#endif
