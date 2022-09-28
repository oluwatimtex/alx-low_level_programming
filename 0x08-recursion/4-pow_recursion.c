#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to y
 * @x: is an int parameter which is a whole number
 * @y: is an int parameter which is the power of x
 * Return: returns an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	else
		return (x ^ y);
}
