#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

#include <limits.h>
#include <stdio.h>
/**
 * _print_int_len - function calculate length
 * @num: input number
 *
 * Return: len
*/

int _print_int_len(int num)
{
	int i, len = 0;

	for (i = 0; num; i++)
	{
		num /= 10;
		len++;
	}
	return (len);
}
/**
 * _print_int_reverse - function that reverse number
 * @num: input number
 *
 * Return: num
*/


int _print_int_reverse(int num)
{
	int rev = 0, remaind = 0;

	while (num)
{
	remaind = num % 10;
	rev = rev * 10 + remaind;
		num /= 10;
}
	return (rev);
}

/**
 *  _print_int - print digit
 *  @num: input number
 *
 *  Return: len
*/

int _print_int(int num)
{
	int len = 0, rev = 0, temp, j = 0;

	len = _print_int_len(num);
	rev = _print_int_reverse(num);
	while (rev)
	{
		temp = rev % 10;
		_putchar(temp + '0');
		rev /= 10;
		j++;
	}
	while (j++ < len)
		_putchar ('0');
	return (len);
}
/**
 * _print_int_min - if number  INT_MIN  print INT_MIN
 *
 * Return: 11
*/

int _print_int_min(void)
{
	char *integer_min = "-2147483648";

	while (*integer_min)
	{
		_putchar(*integer_min);
		integer_min++;
	}
	return (11);
}


/**
 * _printf_int_main - print int
 *
 * @args: argument
 * Return: len
 */



int _printf_int_main(va_list args)
{
	int num, len = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}
	else if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num == INT_MIN)
	{
		len += _print_int_min();
		return (len);
	}
	len += _print_int(num);
	return (len);
}
