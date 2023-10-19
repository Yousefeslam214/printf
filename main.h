#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>


/*tools
int _putchar(char c);
int _puts(char *str);
*/
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_persentage(va_list args);
/*int _printf_int(va_list args);*/

int _putchar(char c);
int _strlen(const char *);
/*char *itoa(long int, int);*/


int _print_int_len(int num);
int _print_int_reverse(int num);
int _print_int(int num);
int _printf_int_main(va_list args);
int _print_int_min(void);


void _convert_to_binary(unsigned int num, int *len_ptr);
int _printf_convert_to_binary(va_list args);



void _dec_to_hex(unsigned int num, int *len);
int _printf_x_hex_str(va_list args);

/**
 * struct fun_job - typedef struct
 * @s: char
 * @f: function
 **/
typedef struct fun_job
{
	char s;
	int (*f)(va_list);
	
}fun_job_s_t;


#endif
