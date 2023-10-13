#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/*
int _print_int_len(int num)
{
	int i;
	
	for (i = 0; num; i++)
	{
		num /= 10;
	}
	return (i);
}
*/

int _printf_int(va_list args)
{
	int num, digit, len = 0, numMod, i= 0;
	num = va_arg(args, int);
	numMod = num;
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	else if (num == 0)
		putchar('0');
	while (numMod > 0)
	{
		
		digit = numMod % 10;
		numMod /= 10;
		len++;
	}
	/*numModified*/
	while (i < len)
	{
		digit = num % 10;
		putchar(digit);
		num /= 10;
		i++;
	}
	return(len);
}
