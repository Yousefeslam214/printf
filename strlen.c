#include "main.h"
/**
 * _strlen - function that return length
 * Return: len
 *
 * @str: it is the string
 */

int _strlen(const char *str)
{
	int len;
	for (len = 0; str[len] != 0; len++)
		;
	return (len);
}
