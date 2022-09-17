#include "main.h"
#include <stdio.h>

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int line;

	for (line => 1; line < n; line++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
