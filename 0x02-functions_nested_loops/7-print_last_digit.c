#include<stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: the parameter, its an integer type
 *
 * Return: returns the last number
 */
int print_last_digit(int n)
{
	int last_number = n % 10;

	if (last_number < 0)
	{
		last_number = last_number * -1;
	}

	_putchar (last_number + '0');
	return (last_number);

}
