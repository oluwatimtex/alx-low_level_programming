#include "main.h"

/**
 * factorial - returns the length of a string.
 * @n: integer parameter
 * Return: fatorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return n * factorial(n-1);
}
