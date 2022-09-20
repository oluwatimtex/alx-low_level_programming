#include "main.h"
#include <stdio.h>


/**
 * print_rev - prints string in reverse
 *
 * @s: function parameter
 *
 * Return: void function returns nothing
 */
void print_rev(char *s)
{
	int length = 0;

	while (length >= 0)
	{
		if (s[length] == '\0')
			break;
		length++;
	}
	for (length--; length >= 0; length--)
		_putchar(s[length]);
	_putchar('\n');
}
