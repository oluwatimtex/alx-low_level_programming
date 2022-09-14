#include<stdio.h>
#include "main.h"

/**
 * _islower - checks for lower and upper case letters
 *
 * Return: function returns 1 for lower case and 0 for uppercase
 */

int _islower(int c)
{
	if (c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
