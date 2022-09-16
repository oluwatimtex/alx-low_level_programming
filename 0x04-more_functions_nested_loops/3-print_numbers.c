#include "main.h"

/**
 * print_numbers - prints numbers between 0 - 9
 * Return: void function returns nothing
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
