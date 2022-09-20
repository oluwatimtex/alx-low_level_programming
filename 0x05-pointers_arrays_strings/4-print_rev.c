#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: function parameter
 *
 * Return: void function returns nothing 
 */
void print_rev(char *s)
{
	int i, n;
	
	n = strlen(s);
	for (i = n-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
