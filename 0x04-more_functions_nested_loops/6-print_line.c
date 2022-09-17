#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: integer parameter
 * Return: void function as no return.
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
