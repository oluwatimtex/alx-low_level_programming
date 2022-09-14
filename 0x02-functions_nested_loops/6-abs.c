#include<stdio.h>
#include "main.h"

/**
 * _abs - displays the absolute number of a value
 *
 * @n: parameter n is an integer type
 *
 * Return: returns the absolute values
 */
int _abs(int n)
{
	if (n >=0)
	{
		_putchar(n);
		return(n);
	}
	else
	{
		_putchar(n * -1);
		return (n * -1);
	}

}
