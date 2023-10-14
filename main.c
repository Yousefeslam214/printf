#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - main function.
 * Return: integer.
*/
int main(void)
{
	int len;
	int len2;


	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
    printf("len is : %d\n",_printf("Negative:[%d]\n", -762534));
    printf("len is : %d\n", printf("Negative:[%d]\n", -762534));
	_printf("Negative:[%y]\n", -762534);
    /*printf("Negative:[%y]\n", -762534);*/

	return (0);

}
