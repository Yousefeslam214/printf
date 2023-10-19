#include "main.h"


/**
 * _printf - it is a printf function
 * @format: it is the string that will be printed
 * Return: it is number of digit
 */

int _printf(const char *format, ...)
{
	int i, j, len = 0, newlen  = 0;

	va_list args;

	fun_job_s_t ob[] = {{'c', _printf_char},
		{'s', _printf_string}, {'%', _printf_persentage},
		{'d', _printf_int_main}, {'i', _printf_int_main},
		{'b', _printf_convert_to_binary}, {'S', _printf_x_hex_str}
	};
	va_start(args, format);
	if ((!format))
		return (-1);
	newlen = _strlen(format);
	if (newlen <= 0)
		return (0);
	if (format[0] == '%' && !format[1])
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			for (j = 0; ob[j].s;j++)
			{
				if ((ob[j].s) == format[i + 1])
				{
					len += ob[j].f(args);
					i++;
				}
			}
		}
	}
	va_end(args);
	return (len);
}
