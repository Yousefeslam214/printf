#include "main.h"

void _convert_to_binary(unsigned int num, int *len_ptr)
{
	if (num == 0)
	{
		return;
	}
	_convert_to_binary(num / 2, len_ptr);
	_putchar('0' + (num % 2));
	(void)(*len_ptr)++;
}
int _printf_convert_to_binary(va_list args)
{
	int num, len = 0;
	num = va_arg(args, int);
	if (num == 0 || num == 1)
	{
		_putchar('0' + num);
		return (1);
	}
	_convert_to_binary(num, &len);
	return(len);
}
