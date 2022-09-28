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
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
