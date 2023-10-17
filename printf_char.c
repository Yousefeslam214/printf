#include "main.h"

/**
 * _printf_char - takes argument
 *
 * @args: argument of char
 *
 * Return: 1
*/

int _printf_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
