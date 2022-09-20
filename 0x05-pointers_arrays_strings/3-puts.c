#include <stdio.h>
#include "main.h"

/**
 * _puts - function prints a string
 *
 * @str: function recieves a parameter str
 *
 * Return: void function returns nothing
 */
void _puts(char *str);
{
	int length = 0;

	while (length >=0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[length]);
		length++;
	}
}
