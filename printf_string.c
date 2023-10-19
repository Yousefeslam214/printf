#include "main.h"

int _printf_string(va_list args)
{
	int i = 0;
	char *str;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return(6);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return(1);
}
