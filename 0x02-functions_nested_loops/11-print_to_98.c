#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - function prints n to 98
 *
 * @n: paramter n is of type integer
 */
void print_to_98(int n)
{
	int count;

	for (count = n; count <= 98; count++)
	{
		_putchar(count);
		_putchar(',');
		_putchar(' ');
	}
}
