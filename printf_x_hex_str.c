#include "main.h"


#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _dec_to_hex - convert hexadecimal to decimal.
 * @num: decimal integer.
 * @len: length of output integer
*/

void _dec_to_hex(unsigned int num, int *len)
{
	unsigned int hex;

	if (num <= 0)
		return;
	hex = num % 16;
	_dec_to_hex(num / 16, len);
	if (hex < 10)
		_putchar('0' + hex);
	else
		_putchar('A' + hex - 10);
	(void) (*len)++;
}

/**
 * _printf_x_hex_str - print converted hexadecimal to decimal.
 * @args: argument.
 * Return: return len.
*/

int _printf_x_hex_str(va_list args)
{
	int i = 0, len = 0;
	int digit;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			digit = str[i];
			if (digit < 16)
			{
				_putchar('0');
				len++;
			}
			_dec_to_hex(digit, &len);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	i++;
	}
	return (len);
}
