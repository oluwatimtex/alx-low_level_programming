#include<stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * n: n is a parameter and is of type integer
 *
 * Return: function returns depending on the parameter n- 1,0 or -1  
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
